//
// Created by DELL on 2022/3/6.
//

#include <stdio.h>
#include <limits.h>

int main() {
  float a_float = 3.14f; // 6, 7~8 +-10^-37 ~ 10^37
  printf("size of float: %d\n", sizeof(float));
  double a_double = 3.14; // 15~16
  printf("size of double: %d\n", sizeof(double));
  // beijing
  float lat = 39.90815f;
  printf("%f", 39.908156f - lat);

  float money = 3.14f; // error, never use float or double to describe money
  return 0;
}
