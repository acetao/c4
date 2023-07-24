#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXS 30

char *search(char *s, char *t);
void ReadString( char s[] ); /* 裁判提供，细节不表 */

int main()
{
    char s[MAXS], t[MAXS], *pos;
    
    ReadString(s);
    ReadString(t);
    pos = search(s, t);
    if ( pos != NULL )
        printf("%d\n", pos - s);
    else
        printf("-1\n");

    return 0;
}

/* 你的代码将被嵌在这里 */

char *search(char *s, char *t){
    int i = 0, j = 0, k = 0;
    int n = 0, m = 0;
    while(s[n])n++;
    while(t[m])m++;
    while(i < n && j < m){
        if(s[i] == t[j]){
            i++; j++;
        }else{
            k++;
            i = k;
            j = 0;
        }
    }
    if(j == m){
        return s + (i - j);
    }else{
        return NULL;
    }
}
void ReadString( char s[] ){   /* 裁判提供，细节不表 */
    char ch;
    int i = 0;
    while((ch = getchar()) != '\n'){
        s[i++] = ch;
    }
    s[i] = '\0';
}
