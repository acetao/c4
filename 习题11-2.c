/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题11-2.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXS 80

int getindex(char *s);

int main() {
  int n;
  char s[MAXS];

  scanf("%s", s);
  n = getindex(s);
  if (n == -1)
    printf("wrong input!\n");
  else
    printf("%d\n", n);

  return 0;
}

/* 你的代码将被嵌在这里 */
int getindex(char *s) {
  if (strcmp(s, "Sunday") == 0)
    return 0;
  else if (strcmp(s, "Monday") == 0)
    return 1;
  else if (strcmp(s, "Tuesday") == 0)
    return 2;
  else if (strcmp(s, "Wednesday") == 0)
    return 3;
  else if (strcmp(s, "Thursday") == 0)
    return 4;
  else if (strcmp(s, "Friday") == 0)
    return 5;
  else if (strcmp(s, "Saturday") == 0)
    return 6;
  else
    return -1;
}
