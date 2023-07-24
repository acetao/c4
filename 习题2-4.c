/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题2-4.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, i, flag = 1;
  double sum = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    sum += flag * (1.0 * i / (2 * i - 1));
    flag = -flag;
  }
  printf("%.3f\n", sum);

  return 0;
}
