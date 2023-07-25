/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              练习2-10.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  double x, result;
  scanf("%lf", &x);
  if (x != 0)
    result = 1 / x;
  else
    x = 0;
  printf("f(%.1f) = %.1f\n", x, result);

  return 0;
}
