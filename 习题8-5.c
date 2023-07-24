#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 20

void strmcpy( char *t, int m, char *s );
void ReadString( char s[] ); /* 由裁判实现，略去不表 */

int main()
{
    char t[MAXN], s[MAXN];
    int m;
    
    scanf("%d\n", &m);
    ReadString(t);
    strmcpy( t, m, s );
    printf("%s\n", s);

    return 0;
}

/* 你的代码将被嵌在这里 */
void strmcpy( char *t, int m, char *s ){
    int n = 0;
    while(t[n])n++;
    if(m > n){
        *s = '\0';
        return;
    }
    int i = 0;
    for(int j = m - 1; j < n; j++){
        s[i++] = t[j];
    }
    s[i] = '\0';

}
void ReadString( char s[] ){
    int i = 0;
    char c;
    while((c = getchar()) != '\n'){
        s[i++] = c;
    }
    s[i] = '\0';
}
