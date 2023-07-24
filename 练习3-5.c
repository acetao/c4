/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              练习3-5.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int year;
  int count = 0, i;
  scanf("%d", &year);
  if (year < 2001 || year > 2100) {
    printf("Invalid year!\n");
    return 0;
  }
  for (i = 2001; i <= year; i++) {
    if ((i % 4 == 0 && i % 100 != 0) || (i % 400 == 0)) {
      count++;
      printf("%d\n", i);
    }
  }
  if (count == 0)
    printf("None\n");

  return 0;
}
