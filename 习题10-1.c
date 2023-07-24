/*
*******************************************************************
Author:                Leety
Date:                  2023-07-23
FileName:              习题10-1.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

int search(int n);

int main() {
  int number;

  scanf("%d", &number);
  printf("count=%d\n", search(number));

  return 0;
}

/* 你的代码将被嵌在这里 */
int isSame(int n) {
  int a, b, c;
  a = n / 100;    //百位
  b = n / 10 % 10;//十位
  c = n % 10;     //个位
  if (a == b || a == c || b == c)
    return 1;
  else
    return 0;
}
int isComplete(int n) {
  int k = (int)sqrt(n);//求n的平方根
  if (k * k == n)      //如果平方根*平方根==n
    return 1;          //则n是完全平方数
  else
    return 0;          //否则不是
}
int search(int n) {
  int count = 0;
  for (int i = 101; i <= n; i++) {
    //有两位数相同且是完全平方数
    if (isSame(i) && isComplete(i))
      count++;
  }
  return count;
}
