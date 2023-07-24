/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              练习3-2.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n, res;
  scanf("%d", &n);
  if (n > 0)
    res = 1;
  else if (n < 0)
    res = -1;
  else
    res = 0;
  printf("sign(%d) = %d\n", n, res);

  return 0;
}
