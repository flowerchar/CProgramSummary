#include <stdio.h>
#include "io_utils.h"

#define LENGTH 10

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

int main() {
  int array[LENGTH] = {1, 4, 7, 0, 10, 33, 654, 392, 23, 43};
//  PRINT_INT(SumIntArray(array, 10));
//
//  int smaller_array[5] = {1,2,3,4,5};
//  PRINT_INT(SumIntArray(smaller_array, 5));
//
//  int bigger_array[15] = {3, 6, 4, 7, 0, 10, 33, 654,6, 4, 7, 0, 10, 33, 654};
//  PRINT_INT(SumIntArray(bigger_array, 15));
  PRINT_HEX(array[200]);
  return 0;
}
