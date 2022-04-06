////
//// Created by DELL on 2022/3/6.
////
#include <stdio.h>
#include <limits.h>
//
//int main() {
//  // <type> <name>;
//  int value;
//
//  // <type> <name> = <initialized value>
//  int value_init = 3;
//
//  value = 4;
//  value_init = 5;
//
//  printf("value: %d\n", value);
//
//  value_init = value;
//
//  printf("size of value: %d\n", sizeof(value));
//
//  printf("address of value: %#x\n", &value);
//
//  // key words 标识符 identifier
//  // 1. a-zA-Z0-9_
//  // 2. 数不能在第一个
//  // 3*. Google code style, a-z_a-z，person_name
//  float a_float3 = 3.14f;
//  float a_float = 3.14f;
//  return 0;
//}
//
//
#define ADD '+'
#define SUB '-'
#define MULTIPLY '*'
#define DIVIDE '/'
#define REM '%'
int main()
{
  int left;
  int right;
  char command;

  char operator;


  int result;

  while (1)
  {
    printf("Please input an expression: \n");
    scanf(" %c", &command);
//    getchar();
    if (command=='p')
    {
      scanf("%d %c %d",&left, &operator, &right);
      if (operator==ADD)
      {
        result = left + right;
        printf("Result: %d\n", result);
      }
      else if (operator==SUB)
      {
        result = left - right;
        printf("Result: %d\n", result);
      }
      else if (operator == MULTIPLY)
      {
        result = left * right;
        printf("Result: %d\n", result);
      }
      else if (operator==DIVIDE)
      {
        result = left / right;
        printf("Result: %d\n", result);
      }
      else
      {
        printf("Unsupported operation: %c\n", operator);
      }
    }
    else if (command=='q')
    {
      break;
    }
    printf("4");
  }


  return 0;
}