#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 10

void ArrayShift( int a[], int n, int m );

int main()
{
    int a[MAXN], n, m;
    int i;
    
    scanf("%d %d", &n, &m);
    for ( i = 0; i < n; i++ ) scanf("%d", &a[i]);
    
    ArrayShift(a, n, m);
    
    for ( i = 0; i < n; i++ ) {
        if (i != 0) printf(" ");
        printf("%d", a[i]);
    }
    printf("\n");
    
    return 0;
}

/* 你的代码将被嵌在这里 */
void ArrayReverse(int a[], int from, int to){
    while(from < to){
        int temp = a[from];
        a[from] = a[to];
        a[to] = temp;
        from++;to--;
    }
}
void ArrayShift( int a[], int n, int m ){
    if(m % n == 0)return;       //m是n的倍数，不用翻转
    m = m % n;                  //m大于n
    ArrayReverse(a, 0, n - 1);  //整体翻转
    ArrayReverse(a, 0, m - 1);  //翻转[0..m-1]
    ArrayReverse(a, m, n - 1);  //翻转[m..n-1]
}
