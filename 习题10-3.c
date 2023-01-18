#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double calc_pow( double x, int n );

int main()
{
    double x;
    int n;

    scanf("%lf %d", &x, &n);
    printf("%.0f\n", calc_pow(x, n));

    return 0;
}

/* 你的代码将被嵌在这里 */

double calc_pow( double x, int n ){
    if(n == 1)return x;
    return x * calc_pow(x, n - 1);
}
