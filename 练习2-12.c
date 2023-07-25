/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              练习2-12.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int lower, upper;
  double result;
  scanf("%d %d", &lower, &upper);
  if (lower > upper)
    printf("Invalid.\n");
  else {
    printf("fahr celsius\n");
    for (int i = lower; i <= upper; i += 2) {
      result = 5 * (i - 32) / 9.0;
      printf("%d%6.1f\n", i, result);
    }
  }

  return 0;
}
