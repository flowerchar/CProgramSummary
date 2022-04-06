//
// Created by DELL on 2022/3/12.
//

#include <stdio.h>
#include <factorial.h>
//#include "include/factorial.h"

int main() {
  printf("3! = %d\n", Factorial(3));
#if defined(MACRO_INCLUDE_FACTORIAL_H_)
  puts("yes");
#endif
  return 0;
}
