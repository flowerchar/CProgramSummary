//
// Created by DELL on 2022/3/12.
//

#include <stdio.h>
#include "io_utils.h"

int main() {
  char string[] = "Hello World";

  for (int i = 0; i < 11; ++i) {
    PRINT_CHAR(string[i]);
  }
  // short %hd
  // NULL \0
  PRINTLNF("%s", string);

  char string_zh[] = "����";
  printf("zhe shi %d", sizeof(string_zh));

//  wchar_t ws[] = L"��ã��й�";
  return 0;
}
