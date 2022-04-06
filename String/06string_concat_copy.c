//
// Created by DELL on 2022/3/20.
//
#include <io_utils.h>
#include <string.h>

int main() {
  char src[] = "HelloWorld";
  char src1[] = {'h','e','l','l','o','w','o','r','l','d','\0'}; //加不加
  char *src2 = "HelloWorld";
  char dest[20] = "C said: ";
//  char *dest = "C said: ";
//  strcat(dest, src);
//  PRINT_INT(strlen(dest));
//  PRINT_INT(strlen(src));
//  strcpy(dest + strlen(dest), src);
//  puts(dest);
//  PRINT_INT(strlen(dest));
  PRINT_INT(sizeof(src));
  PRINT_INT(sizeof(src1));
  PRINT_INT(sizeof(src2));
  puts(src);
  puts(src1);
  puts(src2);
//  printf("%s",src1);
  return 0;
}

