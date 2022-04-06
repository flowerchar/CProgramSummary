//
// Created by DELL on 2022/3/23.
//

#include <stdio.h>
#include <io_utils.h>
#include <errno.h>
#include <string.h>

void Echo() {
  char buffer[4];
  while (1) {
    if (!fgets(buffer, 4, stdin)) {
      break;
    }
    puts(buffer);
//    printf("%s", buffer);
  }
//  gets_s();


//  char buffer[1024];
//  while (1){
//    if (!gets_s(buffer, 1024)) {
//      break;
//    }
//    puts(buffer);
//  }
}

int main() {
  Echo();

  return 0;
}
