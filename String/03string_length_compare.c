//
// Created by DELL on 2022/3/20.
//
#include <io_utils.h>
#include <string.h>


int main() {
  char *string = "Hello World!";
  PRINT_INT(strlen(string));

  char *left = "Hello World!";
  char *right = "Hello C Programmers!";

  PRINT_INT(strcmp(left, right));
  PRINT_INT(strncmp(left, right, 5));

  // int array[];
  char *names[] = {
      "Cindy",
      "Don",
      "Andrey",
      "Elsa",
      "George",
      "Frank",
      "Benny",
  };
  for (int i = 0; i < 6; ++i) {
    PRINT_STRING(names[i]);
  }
  return 0;
}

