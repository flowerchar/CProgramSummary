//
// Created by DELL on 2022/3/15.
//

#include <stdio.h>
#include <io_utils.h>

int *pointer_at_large;

void DangerousPointer() {
  int a = 2;
  pointer_at_large = &a;
  // ...

  pointer_at_large = NULL;
}

int main() {
//  int *p = (int *)0x65fe18; // DANGEROUS !!!
//
//  PRINT_INT(p);
//  PRINT_HEX(&p);
//  PRINT_INT(*p);

  int *p = NULL;  //-> false
//  *p = 3; // error!!
  if (!p) {
    puts("yes");
  }

  DangerousPointer();
  if (pointer_at_large) {
    PRINT_INT(*pointer_at_large);
  }

  return 0;
}
