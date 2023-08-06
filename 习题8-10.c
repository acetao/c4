#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, char *argv[])
{
    int n;
    double x, sum = 0, max = -1000, min = 1000, average;
    scanf("%d", &n);
    for(int i = 0; i < n; i++) {
        scanf("%lf", &x);
        sum += x;
        if(x > max)max = x;
        if(x < min)min = x;
    }
    average = sum / n;
    printf("average = %.2f\n", average);
    printf("max = %.2f\n", max);
    printf("min = %.2f\n", min);

    return 0;
}
