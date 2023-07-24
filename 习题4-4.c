/*
*******************************************************************
Author:                Leety
Date:                  2023-07-18
FileName:              习题4-4.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//习题4-4：特殊a串数列求和
int main(int argc, char *argv[]) {
  int a, n;
  int s = 0, item = 0;
  scanf("%d %d", &a, &n);
  for (int i = 1; i <= n; i++) {
    item = item * 10 + a;
    s += item;
  }
  printf("s = %d\n", s);

  return 0;
}
