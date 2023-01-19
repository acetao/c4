#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int sum(int n);

int main()
{
    int n;

    scanf("%d", &n);
    printf("%d\n", sum(n));

    return 0;
}

/* 你的代码将被嵌在这里 */

int sum(int n)
{
    if (n < 0)
        return 0;
    if (n == 0 || n == 1)
        return n;
    return n + sum(n - 1);
}
