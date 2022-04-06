////
//// Created by DELL on 2022/3/12.
////
//
#include <stdio.h>
#include "io_utils.h"
#include <stdlib.h>
#include <time.h>

#define PLAYER_COUNT 50

void SwapElements(int array[], int first, int second) {
  int temp = array[first];
  array[first] = array[second];
  array[second] = temp;
}

void ShuffleArray(int array[], int length) {
  srand(time(NULL));
  //[0, RAND_MAX]
  for (int i = 0; i < length; i++) {
    int random_number = rand() % length;
    SwapElements(array, i, random_number);
  }
//  for (int i = length - 1; i > 0; i--) {
//    int random_number = rand() % i;
//    SwapElements(array, i, random_number);
//  }
}

int main() {
  int players[PLAYER_COUNT];
  for (int i = 0; i < 50; ++i) {
    players[i] = i;
  }
  // players : 0, 1, ..., 49
  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  ShuffleArray(players, PLAYER_COUNT);
  PRINT_INT_ARRAY(players, PLAYER_COUNT);
  return 0;
}

//#include <stdio.h>
//#include <time.h>
//#include <stdlib.h>
//
//void swap(int array[],int first,int second)
//{
//  int temp=array[first];
//  array[first]=array[second];
//  array[second]=temp;
//} //数组在函数里改变会影响主函数的值，变量不会
//
//void suiji(int array[],int length)
//{
//  srand(time(NULL));
//  for (int i=0;i<length;i++)
//  {
//    int k=rand()%length;
//    swap(array,i,k);
//  }
//}
//
//int main()
//{
//  int array_0[50];
//  for(int i=0;i<50;i++)
//  {
//    array_0[i]=i;
//  }
//
//  for (int i=0;i<50;i++)
//  {
//    printf("%d ",array_0[i]);
//  }
//  printf("\n");
//
//  suiji(array_0,50);
//
//  for (int i=0;i<50;i++)
//  {
//    printf("%d ",array_0[i]);
//  }
//}