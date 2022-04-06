////
//// Created by DELL on 2022/3/15.
////
//
//#include <stdio.h>
//#include <stdlib.h>
//#include <io_utils.h>
//
//#define PLAYER_COUNT 10
//
//void InitPointer(int **ptr, int length, int default_value) {
//  *ptr = malloc(sizeof(int) * length);
//  for (int i = 0; i < length; ++i) {
//    (*ptr)[i] = default_value;
//  }
//}
//void InitPointer1(int *ptr, int length, int default_value) {
//  ptr = malloc(sizeof(int) * length);
//  for (int i = 0; i < length; ++i) {
//    ptr[i] = default_value;
//  }
//}
//
//int main() {
//  int *p1 = malloc(sizeof(int));
//  PRINT_INT(*p1);
//  PRINT_HEX(p1);
//  int * players;
//  InitPointer1(players, PLAYER_COUNT, 0);
//  PRINT_INT_ARRAY(players, PLAYER_COUNT);
////  players = calloc(PLAYER_COUNT, sizeof(int));
////  for (int i = 0; i < PLAYER_COUNT; ++i) {
////    PRINT_INT(players[i]);
////    players[i] = i;
////  }
////  PRINT_INT_ARRAY(players, PLAYER_COUNT);
////
////  players = realloc(players, PLAYER_COUNT * 2 * sizeof(int));
////  PRINT_INT_ARRAY(players, PLAYER_COUNT * 2);
////
////  if (players) {
////
////    free(players);
////  } else {
////
////  }
//
//
//  return 0;
//}


#include <stdio.h>
#include <stdlib.h>

void qingling(int *array,int length)
{
  for (int i=0;i<length;i++)
  {
    array[i]=0;
  }
}

int main()
{
  int *array;
  int array_count=5;
  array=calloc(array_count,sizeof(int));
//  array=realloc(array,array_count+2);
  array=realloc(array,28);
  qingling(array,7);
  for (int i=0;i<array_count+2;i++)
  {
    printf("--->%d\t",array[i]);
  }
  free(array);
  return 0;
}