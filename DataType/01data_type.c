#include <stdio.h>
#include <limits.h>

int main() {
  // %d:decimal
  // %hd: short decimal
  // %ld: long decimal
  // %lld: long long decimal
  // %x: 16
  // %o: 8
  // \n:new line
  printf("short int: %d\n", sizeof(short int));
  printf("int: %d\n", sizeof(int));
  printf("long int: %d\n", sizeof(long int));
  printf("long long int: %d\n", sizeof(long long int));

  // 2^31,查看最大值和最小值, unsigned还可以与short等等结合

  printf("max is %d\nmin is %d\n", INT_MAX, INT_MIN);
  printf("unsigned max is %u\nmin is %d\n", UINT_MAX, 0);
  printf("long max is %ld\nlong min is %ld\n", LONG_MAX, LONG_MIN);//这里需要ld格式化

  printf("100 in 16 is %x,in 8 is %o", 100, 100);

  // long long int
  return 0;
}
