#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int matrix[10][10];

int main(int argc, char *argv[])
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i < n; i++)
        for(int j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);
    int sum = 0;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            //i!=n-1最后一行，j!=n-1最后一列，i+j!=n-1副对角线
            if(i != n - 1 && j != n - 1 && i + j != n - 1)
                sum += matrix[i][j];
        }
    }
    printf("%d\n", sum);

    return 0;
}
