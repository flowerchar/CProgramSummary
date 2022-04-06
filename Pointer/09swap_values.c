//
// Created by DELL on 2022/3/15.
//
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <io_utils.h>

void SwapInt(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

void Swap(void *first, void *second, size_t size) {
  void *temp = malloc(size);
  if (temp) {
    memcpy(temp, first, size);
    memcpy(first, second, size);
    memcpy(second, temp, size);
    free(temp);
  } else {
    // ...
  }
}

int main() {
  int a = 0;
  int b = 1;

  double x = 3.0;
  double y = 4.0;

  // SwapInt
  SwapInt(&a, &b);
  Swap(&x, &y, sizeof(double ));

  PRINT_INT(a);
  PRINT_INT(b);
  PRINT_DOUBLE(x);
  PRINT_DOUBLE(y);
  return 0;
}

