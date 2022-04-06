#include <stdio.h>

void convert(int hex) {
  if(hex / 16 > 0) {
    convert(hex / 16);
  }
  printf("%d\t", hex % 16);
}

int main() {

}