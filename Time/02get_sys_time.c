//
// Created by DELL on 2022/3/21.
//
#include <io_utils.h>
#include <time_utils.h>
#include <time.h>

int main() {
  time_t current_time;
  time(&current_time);
  PRINT_LONG(current_time);

  current_time = time(NULL);
  PRINT_LONG(current_time);

  PRINT_LLONG(TimeInMillisecond());
  PRINT_LLONG(TimeInMillisecond());
  PRINT_LLONG(TimeInMillisecond());
  PRINT_LLONG(TimeInMillisecond());

  return 0;
}

