/*
*******************************************************************
Author:                Leety
Date:                  2023-07-24
FileName:              练习2-8.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int F;
  scanf("%d", &F);
  int C = 5 * (F - 32) / 9;
  printf("Celsius = %d\n", C);

  return 0;
}
