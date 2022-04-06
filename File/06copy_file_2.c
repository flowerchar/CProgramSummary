//
// Created by DELL on 2022/3/23.
//

#include <stdio.h>
#include <io_utils.h>
#include <time_utils.h>
#include <locale.h>

#define COPY_SUCCESS 1
#define COPY_ILLEGAL_ARGUMENTS -1
#define COPY_SRC_OPEN_ERROR -2
#define COPY_SRC_READ_ERROR -3
#define COPY_DEST_OPEN_ERROR -4
#define COPY_DEST_WRITE_ERROR -5
#define COPY_UNKNOWN_ERROR -100

int CopyFile(char const *src, char const *dest) {
  if (!src || !dest) {
    return COPY_ILLEGAL_ARGUMENTS;
  }

  FILE *src_file = fopen(src, "r");
  if (!src_file) {
    return COPY_SRC_OPEN_ERROR;
  }

  FILE *dest_file = fopen(dest, "w");
  if (!dest_file) {
    fclose(src_file);
    return COPY_DEST_OPEN_ERROR;
  }

  int result;

  while (1) {
    int next = fgetc(src_file);
    if (next == EOF) {
      if (ferror(src_file)) {
        result = COPY_SRC_READ_ERROR;
      } else if (feof(src_file)) {
        result = COPY_SUCCESS;
      } else {
        result = COPY_UNKNOWN_ERROR;
      }
      break;
    }

    if (fputc(next, dest_file) == EOF) {
      result = COPY_DEST_WRITE_ERROR;
      break;
    }
  }

  fclose(src_file);
  fclose(dest_file);

  return result;
}

#define BUFFER_SIZE 512

int CopyFile2(char const *src, char const *dest) {
  if (!src || !dest) {
    // 参数至少有一个为 NULL
    return COPY_ILLEGAL_ARGUMENTS;
  }

  FILE *src_file = fopen(src, "r");
  if (!src_file) {
    // src 打开失败
    return COPY_SRC_OPEN_ERROR;
  }

  FILE *dest_file = fopen(dest, "w");
  if (!dest_file) {
    // dest 打开失败，记得关闭 src
    fclose(src_file);
    return COPY_DEST_OPEN_ERROR;
  }

  int result = COPY_SUCCESS;
  char buffer[BUFFER_SIZE];
  char *next;
  while (1) {
    next = fgets(buffer, BUFFER_SIZE, src_file);
    if (!next) {
      if (ferror(src_file)) {
        result = COPY_SRC_READ_ERROR;
      } else if(feof(src_file)) {
        result = COPY_SUCCESS;
      } else {
        result = COPY_UNKNOWN_ERROR;
      }
      break;
    }

    if (fputs(next, dest_file)) { // == EOF
      result = COPY_DEST_WRITE_ERROR;
      break;
    }
  }

  fclose(src_file);
  fclose(dest_file);
  return result;
}

int main() {
  setlocale(LC_ALL, "zh_CN.utf-8");
  char *srcs[] = {"data/io_utils.h", "data/三国演义.txt"};
  char *dsts[] = {"data_copy/io_utils.h", "data_copy/三国演义.txt"};

  for (int i = 0; i < 2; ++i) {
    TimeCost(NULL);
    CopyFile(srcs[i], dsts[i]);
    TimeCost(srcs[i]);
    PRINT_IF_ERROR("CopyFile: %s", srcs[i]);
  }

  for (int i = 0; i < 2; ++i) {
    TimeCost(NULL);
    CopyFile2(srcs[i], dsts[i]);
    TimeCost(srcs[i]);
    PRINT_IF_ERROR("CopyFile2: %s", srcs[i]);
  }
  return 0;
}
