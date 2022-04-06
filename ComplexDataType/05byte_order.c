#include <io_utils.h>

int IsBigEndian() {
  union {
    char c[2];
    short s;
  } value = {.s=0x100};
  // 01 00

  printf("%x<-->%x",value.c[0],value.c[1]); // 00 10
  printf("\n");
  printf("%d",value.s);// 256  0100
  // 00 01
  return value.c[0] == 1;
}

int IsBigEndian2() {
  short s = 0x100;
  char *p = (char *)&s;
  return p[0] == 1;
  // 00 01
}

int ToggleEndian(int original) {
  // why 4?
  union {
    char c[4];
    int i;
  } value = {.i=original};

  char temp = value.c[0];
  value.c[0] = value.c[3];
  value.c[3] = temp;
  temp = value.c[1];
  value.c[1] = value.c[2];
  value.c[2] = temp;

  return value.i;
}

int ToggleEndian2(int original) {
  char *p = (char *)&original;
  char temp = p[0];
  p[0] = p[3];
  p[3] = temp;
  temp = p[1];
  p[1] = p[2];
  p[2] = temp;

  return original;
}

int main() {
  PRINT_INT(IsBigEndian());

  int original = 0x12345678;
  PRINT_HEX(ToggleEndian(original));
//  short s = 0x100;
//  char *p = (char *)&s;
//  PRINT_INT(s);
//  PRINT_INT(p);
  return 0;
}
