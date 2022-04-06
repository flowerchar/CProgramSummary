#include <stdio.h>
#include "io_utils.h"

// vla C99; gcc; msvc x
void SumIntArrays(int rows, int columns, int array[rows][columns], int result[]) {
  for (int i = 0; i < rows; ++i) {
    for (int j = 0; j < columns; ++j) {
      result[i] += array[i][j];
    }
  }
}

int main() {
  int matrix[5][2] = {
      0, 5, 1, [1][1] = 6, 2, 7, 3, 8, 4, 9
  };

  //int [2]
  //matrix[0]

  for (int i = 0; i < 5; ++i) {
    for (int j = 0; j < 2; ++j) {
      matrix[i][j] = i + j;
    }
  }

  int scores[5][4] = {
      {135, 135, 138, 277},
      {105, 134, 108, 265},
      {113, 107, 145, 232},
      {123, 99, 140, 227},
      {98, 118, 127, 242}
  };

  int result[20] ;//= {0};
  SumIntArrays(5, 4, scores, result);
  PRINT_INT_ARRAY(result, 5);
  return 0;
}
