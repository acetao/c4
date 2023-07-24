#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int factorsum( int number );
void PrintPN( int m, int n );
    
int main()
{
    int m, n;

    scanf("%d %d", &m, &n);
    if ( factorsum(m) == m ) printf("%d is a perfect number\n", m);
    if ( factorsum(n) == n ) printf("%d is a perfect number\n", n);
    PrintPN(m, n);

    return 0;
}

/* 你的代码将被嵌在这里 */
int factorsum( int number ){
    int sum = 0;
    int i;
    for(i = 1; i <= number / 2; i++){
        if(number % i == 0)
            sum += i;
    }
    return sum;
}
void PrintPN( int m, int n ){
    int k, sum = 0;
    for(k = m; k <= n; k++){
        if(factorsum(k) == k){
            sum++;
            printf("%d = ", k);
            int flag = 1;
            for(int i = 1; i <= k / 2; i++){
                if(k % i == 0){
                    if(flag){
                        flag = 0;
                        printf("%d", i);
                    }else{
                        printf(" + %d", i);
                    }
                }
            }
            printf("\n");
        }
    }
    if(sum == 0)printf("No perfect number\n");
}
