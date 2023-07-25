/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              习题4-2.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  double x, sum = 1, item, fz, fm, i = 1;
  scanf("%lf", &x);
  fz = 1;
  fm = 1;
  do {
    fz *= x;
    fm *= i;        //计算i的阶乘
    item = fz / fm;
    sum += item;
    i++;
  } while (item >= 0.00001);
  printf("%.4f\n", sum);

  return 0;
}
