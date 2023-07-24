/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              练习3-3.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int n, sum = 0, count = 0;
  double ave = 0.0;
  scanf("%d", &n);
  if (n == 0) {
    printf("average = %.1f\n", 0.0);
    printf("count = %d\n", 0);
    return 0;
  }
  for (int i = 1; i <= n; i++) {
    int x;
    scanf("%d", &x);
    sum += x;
    if (x >= 60)
      count++;
  }
  printf("average = %.1f\n", 1.0 * sum / n);
  printf("count = %d\n", count);

  return 0;
}
