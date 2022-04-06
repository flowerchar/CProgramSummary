//
// Created by DELL on 2022/3/21.
//

#include <io_utils.h>
#include <time_utils.h>
#include <time.h>

int main() {
  long_time_t current_time_in_ms = TimeInMillisecond();
  int current_time_millisecond = current_time_in_ms % 1000;
  time_t current_time;
  time(&current_time);
  PRINT_LLONG(current_time);
  PRINT_LLONG(current_time_in_ms);
  PRINT_INT(current_time_millisecond);

  struct tm *calendar_time = localtime(&current_time);
//  PRINT_INT(calendar_time->tm_year);
//  PRINT_INT(calendar_time->tm_mon);
//  PRINT_INT(calendar_time->tm_mday);
//  PRINT_INT(calendar_time->tm_hour);
//  PRINT_INT(calendar_time->tm_min);
//  PRINT_INT(calendar_time->tm_sec);

  puts(asctime(calendar_time));
  puts(ctime(&current_time));

  //2022-03-21 19:02:29
  char current_time_s[30];
  size_t size = strftime(current_time_s, 20, "%Y-%m-%d %H:%M:%S", calendar_time);
//  size_t size = strftime(current_time_s, 20, "%F %T", calendar_time);
  PRINT_INT(size);
  puts(current_time_s);

  //20220321184628
  size_t size2 = strftime(current_time_s, 19, "%Y%m%d%H%M%S", calendar_time);
  sprintf(current_time_s + 14, "%d", current_time_millisecond);
  PRINT_INT(size2);
  puts(current_time_s);
  return 0;
}
