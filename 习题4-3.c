/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              习题4-3.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, cnt = 0;
  double fz = 2, fm = 1, tmp; //注意：此处不能定义为int，因为n较大时，易导致溢出
  double item, sum = 0;
  scanf("%d", &n);
  while (cnt < n) {
    item = fz / fm;
    sum += item;
    cnt++;
    tmp = fz;
    fz += fm;
    fm = tmp;
  }
  printf("%.2f\n", sum);

  return 0;
}
