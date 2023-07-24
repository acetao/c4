/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题2-5.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, i;
  double sum = 0;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    sum += sqrt(i);
  }
  printf("sum = %.2f\n", sum);

  return 0;
}
