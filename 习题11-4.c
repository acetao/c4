#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXS 10

char *str_cat(char *s, char *t);

int main() {
  char *p;
  char str1[MAXS + MAXS] = {'\0'}, str2[MAXS] = {'\0'};

  scanf("%s%s", str1, str2);
  p = str_cat(str1, str2);
  printf("%s\n%s\n", p, str1);

  return 0;
}

/* 你的代码将被嵌在这里 */
char *str_cat(char *s, char *t) {
  char *p = s;
  while (*p)
    p++;
  while (*t) {
    *p = *t;
    p++;
    t++;
  }
  *p = '\0';
  return s;
}
