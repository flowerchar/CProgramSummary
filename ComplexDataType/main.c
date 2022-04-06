#include <stdio.h>
#include "stdlib.h"
int sum=0;

//int print_digit(int x)
//{
//  int flag2=x;
//  while(flag2>9)
//  {
//    flag2=flag2/10;
//  }
//  sum+=flag2;
//  if (x>9)
//  {
//    int jishu=1;
//    int flag=x;
//    while(flag>9)
//    {
//      flag=flag/10;
//      jishu=jishu*10;
//    }
//    print_digit(x-flag*jishu);
//  }
//
//  return sum;
//}

int main()
{
  int * p_int = malloc(sizeof(int ));
  free(p_int);
  if (p_int) {
    puts("this is not null ");
  } else
  {
    puts("this is null");
  }
  int * p_int1 = NULL;
  return 0;
}