//
// Created by DELL on 2022/3/15.
//

#include <stdio.h>
#include <io_utils.h>

int SumIntArray(int array[], int length) {
  int sum = 0;
  for (int i = 0; i < length; ++i) {
    sum += array[i];
  }
  return sum;
}

void SumIntArray2(int array[], int length, int *sum) {
  *sum = 0;
  for (int i = 0; i < length; ++i) {
    *sum += array[i];
  }
}

int AddOne(int a) {
  a++;
  return a;
}

void AddOne1(int a){
  a++;
}

void AddOne2(int *a){
  (*a)++;
}
int main() {
  int array[] = {0, 1, 2, 3, 4};
  int sum = SumIntArray(array, 5);
  int sum2;
  SumIntArray2(array, 5, &sum2);

  PRINT_INT(sum);
  PRINT_INT(sum2);

  int a = 1;
  PRINT_INT(AddOne(a));
  a = 1;
  AddOne1(a);
  PRINT_INT(a);
  a = 1;
  AddOne2(&a);
  PRINT_INT(a);
  return 0;
}
