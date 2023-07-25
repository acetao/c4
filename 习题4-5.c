/*
*******************************************************************
Author:                Leety
Date:                  2023-07-25
FileName:              习题4-5.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char const *argv[]) {
  int n, i, j, k, count = 0;
  int fen5, fen2, fen1;
  scanf("%d", &n);

  fen5 = n / 5;               /* 5分的硬币的最多的数量*/
  fen2 = (n - 5) / 2;         /* 2分的硬币的最多的数量*/
  fen1 = (n - 5 - 2);         /* 1分的硬币的最多的数量*/
  for (i = fen5; i >= 1; i--) /* 取5分的硬币i枚 */
  {
    for (j = fen2; j >= 1; j--) /* 取2分的硬币j枚 */
    {
      for (k = fen1; k >= 1; k--) /* 取1分的硬币k枚 */
      {
        if (i * 5 + j * 2 + k == n) {
          printf("fen5:%d, fen2:%d, fen1:%d, total:%d\n", i, j, k, i + j + k);
          count++;
        }
      }
    }
  }
  printf("count = %d\n", count);

  return 0;
}
