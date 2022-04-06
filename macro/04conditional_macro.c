//
// Created by DELL on 2022/3/12.
//
#include <stdio.h>

#ifdef __cplusplus
extern "C" {
#endif
//.....
int Add(int left, int right);
#ifdef __cplusplus
};
#endif

/*
 * 1. #ifdef 如果定义了
 * 2. #ifndef 如果没定义
 * 3. #if 如果 ...
 *
 * #endif
 *
 *  #if defined(MACRO) ==> #ifdef MACRO
 */
#define DEBUG
void dump(char *message) {
#ifdef DEBUG
  puts(message);
#endif
}

int main() {
  dump("main start");

  printf("Hello world!");

  dump("main end.");

  return 0;
}

