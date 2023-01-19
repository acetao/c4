#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int sum = 0;
  char ch;
  while ((ch = getchar()) != '\n') {
    if (ch >= 'A' && ch <= 'Z' && ch != 'A' && ch != 'E' && ch != 'I' &&
        ch != 'O' && ch != 'U')
      sum++;
  }
  printf("%d\n", sum);

  return 0;
}
