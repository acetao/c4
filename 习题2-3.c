/*
*******************************************************************
Author:                Leety
Date:                  2023-07-24
FileName:              习题2-3.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);
  double sum = 0;
  for (int i = m; i <= n; i++) {
    sum += i * i + 1.0 / i;
  }
  printf("sum = %.6f\n", sum);

  return 0;
}
