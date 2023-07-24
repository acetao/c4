/*
*******************************************************************
Author:                Leety
Date:                  2023-07-12
FileName:              习题4-9.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int i, j, n;
  scanf("%d", &n);
  n = (n + 1) / 2;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= 2 * (n - i); j++)
      printf(" ");
    for (j = 1; j <= 2 * i - 1; j++)
      printf("* ");
    printf("\n");
  }
  for (i = n - 1; i >= 1; i--) {
    //打印每一行前面的空格
    for (j = 1; j <= 2 * (n - i); j++)
      printf(" ");
    for (j = 1; j <= 2 * i - 1; j++)
      printf("* ");
    printf("\n");
  }

  return 0;
}
