#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXS 10

void Shift( char s[] );

void GetString( char s[] ); /* 实现细节在此不表 */

int main()
{
    char s[MAXS];

    GetString(s);
    Shift(s);
    printf("%s\n", s);
    
    return 0; 
}

/* 你的代码将被嵌在这里 */
void Shift( char s[] ){
    char c;
    int i, k, n;
    n = strlen(s); //获得字符串长度
    for(k = 1; k <= 3; k++){ //循环操作3次
        c = s[0];            //暂存首字符
        for(i = 1; i < n; i++){ //从第2个字符开始，每个字符依次左移
            s[i - 1] = s[i];
        }
        s[n - 1] = c; //暂存的首字符放入末尾
    }
}

void GetString( char s[] ){
    int i = 0;
    char c;
    while((c = getchar()) != '\n'){
        s[i++] = c;
    }
    s[i] = '\0';
} 
