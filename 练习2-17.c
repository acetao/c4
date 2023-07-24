/*
*******************************************************************
Author:                Leety
Date:                  2023-07-18
FileName:              练习2-17.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i <= n; i++) {
    printf("pow(3,%d) = %d\n", i, (int)pow(3, i));
  }

  return 0;
}
