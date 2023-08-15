#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  double fare, total = 0, base = 0.53;
  scanf("%lf", &fare);

  if (fare < 0) {
    printf("Invalid Value!\n");
    return 0;
  }
  if (fare <= 50) {
    total = fare * base;
  } else {
    total = 50 * 0.53 + (fare - 50) * (base + 0.05);
  }
  printf("cost = %.2lf\n", total);

  return 0;
}
