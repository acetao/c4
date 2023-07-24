/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题4-1.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, sum = 0;
  while (1) {
    scanf("%d", &n);
    if (n < 1)
      break;
    if (n % 2 == 1)
      sum += n;
  }
  printf("%d\n", sum);

  return 0;
}
