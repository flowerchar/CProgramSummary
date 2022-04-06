//
// Created by DELL on 2022/3/21.
//

#include <io_utils.h>
#include <time_utils.h>
#include <time.h>

int main() {
  char *time = "2022-03-23 90:80:32.123";
  struct tm parsed_time;
  int millisecond;
// msvc                       2022 03 23
  sscanf(time, "%4d-%2d-%2d %2d:%2d:%2d.%3d",
         &parsed_time.tm_year,
         &parsed_time.tm_mon,
         &parsed_time.tm_mday,
         &parsed_time.tm_hour,
         &parsed_time.tm_min,
         &parsed_time.tm_sec,
         &millisecond);

  parsed_time.tm_year -= 1900;
  parsed_time.tm_mon -= 1;

  mktime(&parsed_time);

  PRINT_INT(parsed_time.tm_year);
  PRINT_INT(parsed_time.tm_mon);
  PRINT_INT(parsed_time.tm_mday);
  PRINT_INT(parsed_time.tm_hour);
  PRINT_INT(parsed_time.tm_min);
  PRINT_INT(parsed_time.tm_sec);

  PRINT_INT(millisecond);
  return 0;
}
