/*
*******************************************************************
Author:                Leety
Date:                  2023-08-06
FileName:              练习2-18.c
Copyright (C):         2023 All rights reserved
*******************************************************************
*/
#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

double fact(int n) {
    double f = 1;
    for(int i = 1; i <= n; i++)
        f *= i;
    return f;
}

int main(int argc, char *argv[])
{
    int m, n;
    scanf("%d %d", &m, &n);
    double ans = fact(n) / fact(m) / fact(n - m);
    printf("result = %.0lf\n", ans);

    return 0;
}
