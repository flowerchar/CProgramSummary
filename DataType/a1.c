#include<stdio.h>
#include <time.h>
int main()
{
  time_t begin_time;
  begin_time=time(NULL);
  int a=0, j;
  for(j=0;j<10000000000;j++){
    a++;
    a++;
    a--;
    a--;
  }
  printf("end_time sub begin_time is %d", time(NULL) - begin_time);
  return 0;
}