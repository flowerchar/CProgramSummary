//
// Created by DELL on 2022/3/15.
//

#include <stdio.h>
#include <io_utils.h>

int main() {
  int a;
  scanf("%d", &a);

  int *p = &a;
  PRINT_HEX(p);
  PRINT_HEX(&a);

  PRINT_INT(sizeof(int *));
  PRINT_INT(sizeof(short int *));
  PRINT_INT(sizeof(float *));
  PRINT_INT(sizeof(double *));
  PRINT_INT(sizeof(char *));
  PRINT_INT(*p);
  PRINT_INT(a);

  int **pp = &p;
  //*pp => p;

  PRINT_INT(**pp);
  PRINT_INT(a);
  return 0;
}
