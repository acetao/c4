#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define MAXS 10

char *match( char *s, char ch1, char ch2 );

int main()
{
    char str[MAXS], ch_start, ch_end, *p;
    
    scanf("%s\n", str);
    scanf("%c %c", &ch_start, &ch_end);
    p = match(str, ch_start, ch_end);
    printf("%s\n", p);

    return 0;
}

/* 你的代码将被嵌在这里 */
char *match( char *s, char ch1, char ch2 ){
    char* p = s;
    while(*p && *p != ch1)p++;
    if(*p == '\0'){  //没有找到ch1
        printf("\n");                     
        return p;
    }
    //找到ch1
    char* q = p;
    while(*q && *q != ch2){ //寻找ch2
        q++;
    }
    //q非空，找到ch2
    if(*q != '\0'){ //找到ch2，则从指针p开始的位置打印到指针q的位置
        char* tmp = p;
        while(tmp != q){
            printf("%c", *tmp);
            tmp++;
        }
        printf("%c\n", *tmp);
    }else{ //没有找到ch2，则从指针p开始的位置打印到末尾
        printf("%s\n", p);
    }


    return p;
}
