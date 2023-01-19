#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

char *match(char *s, char ch);

int main(void) {
  char ch, str[80], *p = NULL;

  scanf("%s", str);
  getchar();      /* 跳过输入字符串和输入字符之间的分隔符 */
  ch = getchar(); /* 输入一个字符 */
  p = match(str, ch); /* 调用函数match() */
  if (p != NULL) {    /* 找到字符ch */
    printf("%s\n", p);
  } else {
    printf("Not Found.\n");
  }

  return 0;
}

/* 请在这里填写答案 */
char *match(char *s, char ch) {
  char *p = s;
  int flag = 0;
  while (*s) {
    if (*s == ch) {
      p = s;
      flag = 1;
    }
    s++;
  }
  if (flag)
    return p;
  else
    return NULL;
}
