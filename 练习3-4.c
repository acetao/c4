/*
*******************************************************************
Author:                Leety
Date:                  2023-07-18
FileName:              练习3-4.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char c;
  int letter = 0, blank = 0, digit = 0, other = 0;
  for (int i = 1; i <= 10; i++) {
    c = getchar();
    if (c >= 'a' && c <= 'z' || c >= 'A' && c <= 'Z')
      letter++;
    else if (c == ' ' || c == '\n')
      blank++;
    else if (c >= '0' && c <= '9')
      digit++;
    else
      other++;
  }
  printf("letter = %d", letter);
  printf(", blank = %d", blank);
  printf(", digit = %d", digit);
  printf(", other = %d\n", other);

  return 0;
}
