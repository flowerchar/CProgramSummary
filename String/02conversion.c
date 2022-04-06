//
// Created by DELL on 2022/3/20.
//

#include <io_utils.h>
#include <stdlib.h>
#include <errno.h>

int main() {
  PRINT_INT(atoi("1234")); // 1234
  PRINT_INT(atoi("-1234")); // -1234
  PRINT_INT(atoi("   1234abcd")); // 1234
  PRINT_INT(atoi("0x10")); // 0
  PRINT_DOUBLE(atof("12.34")); // 12.34
  PRINT_DOUBLE(atof("-12e34")); // -1.2e+35
  PRINT_DOUBLE(atof("   1.234abcd")); // 1.234
  PRINT_DOUBLE(atof("0x10")); // 16
//  PRINT_DOUBLE(atof("0x10p3.9")); // 128


  return 0;
}
