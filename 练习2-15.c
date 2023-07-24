/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              练习2-15.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, i, flag = 1, cnt = 0;
  double sum = 0;
  scanf("%d", &n);
  for (i = 1; cnt < n; i += 3) {
    sum += flag * 1.0 / i;
    flag = -flag;
    cnt++; //统计已经计算的项数
  }
  printf("sum = %.3f\n", sum);

  return 0;
}
