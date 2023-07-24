#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void hollowPyramid ( int n );

int main()
{    
    int n;

    scanf("%d", &n);
    hollowPyramid ( n );

    return 0;
}

/* 你的代码将被嵌在这里 */
void hollowPyramid ( int n ){
    int i, j;
    for(i = 1; i < n; i++){ //打印第1行~第n-1行
        //打印每行开始的空格：第1行n-1个空格，第2行n-2个空格，第i行n-i个空格
        for(j = 1; j <= n - i; j++)
            printf(" ");
        //打印每行的数字：首尾打印数字，其他位置打印空格
        for(j = 1; j <= 2 * i - 1; j++){
            if(j == 1 || j == 2 * i - 1)
                printf("%d", i);
            else printf(" ");
        }
        printf("\n");
    }
    //打印最后一行
    for(j = 1; j <= 2 * n - 1; j++)
        printf("%d", n);
    printf("\n");
}
