/*
*******************************************************************
Author:                Leety
Date:                  2023-07-18
FileName:              习题2-6.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, sum = 0, fact = 1;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    fact *= i;
    sum += fact;
  }
  printf("%d\n", sum);

  return 0;
}
