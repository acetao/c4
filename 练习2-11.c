/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              练习2-11.c
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
  if (x < 0)
    result = pow(x + 1, 2) + 2 * x + 1 / x;
  else
    result = sqrt(x);
  printf("f(%.2f) = %.2f\n", x, result);

  return 0;
}
