/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题11-1.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *getmonth(int n);

int main() {
  int n;
  char *s;

  scanf("%d", &n);
  s = getmonth(n);
  if (s == NULL)
    printf("wrong input!\n");
  else
    printf("%s\n", s);

  return 0;
}

/* 你的代码将被嵌在这里 */
char *getmonth(int n) {
  char *s[12] = {"January",   "February", "March",    "April",
                 "May",       "June",     "July",     "August",
                 "September", "October",  "November", "December"};
  if (n < 1 || n > 12)
    return NULL;
  return s[n - 1];
}
