//
// Created by DELL on 2022/3/16.
//

#include <stdio.h>
#include <io_utils.h>
#include <stddef.h>
int main() {
  typedef struct Person {
    char *name;
    int age;
    char *id;
  } Person;

  struct Person person = {.name="bennyhuo", .id="12113322222"};
  PRINT_INT(sizeof(person));
  PRINT_INT( sizeof(int));
  PRINT_INT(sizeof(char *));
  PRINT_INT(person.age);
  person.age = 30;

  typedef struct {
    char a; // 1
    char b; // 1
    int c;
    short d; // 2
    double e; // 8
  } Align;

  typedef struct {
    char a; // 1
    char b; // 1
    short d; // 2
    int c; // 4
    double e; // 8
  } OptimizedAlign;


  Align align = {'a', 'b', 3, 4, 5.0};
  OptimizedAlign optimized_align = {'a','b',2,4,8.0};
  PRINT_INT(sizeof(OptimizedAlign));
  PRINT_INT(sizeof(Align));
  return 0;
}
