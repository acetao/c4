#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 20

void delchar(char *str, char c);
void ReadString(char s[]); /* 由裁判实现，略去不表 */

int main() {
  char str[MAXN], c;

  scanf("%c\n", &c);
  ReadString(str);
  delchar(str, c);
  printf("%s\n", str);

  return 0;
}

/* 你的代码将被嵌在这里 */
void delchar(char *str, char c) {
  int i = 0, j;
  for (j = 0; str[j]; j++) {
    if (c != str[j]) {
      str[i++] = str[j];
    }
  }
  str[i] = '\0';
}
