#include <stdio.h>

int main(int argc, char** argv) {
  int a = 5;
  
  int arr[16];

  for (int i = 0; i <= 16; i++) {
    arr[i] = i*i;
  }

  printf("a is %d\n", a);
  return 0;
}
