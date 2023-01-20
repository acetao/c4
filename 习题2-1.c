#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int a, b, c, d, sum = 0;
  double aver = 0;
  scanf("%d%d%d%d", &a, &b, &c, &d);
  sum = a + b + c + d;
  aver = sum / 4.0;
  printf("Sum = %d; Average = %.1f\n", sum, aver);
  return 0;
}
