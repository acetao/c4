#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXS 15

void StringCount(char *s);
void ReadString(char *s); /* 由裁判实现，略去不表 */

int main() {
  char s[MAXS];

  ReadString(s);
  StringCount(s);

  return 0;
}

/* Your function will be put here */
void StringCount(char *s) {
  int upper = 0, lower = 0, digit = 0, space = 0, other = 0;
  for (int i = 0; s[i]; i++) {
    if (s[i] >= 'A' && s[i] <= 'Z')
      upper++;
    else if (s[i] >= 'a' && s[i] <= 'z')
      lower++;
    else if (s[i] >= '0' && s[i] <= '9')
      digit++;
    else if (s[i] == ' ')
      space++;
    else
      other++;
  }
  printf("%d %d %d %d %d\n", upper, lower, space, digit, other);
}
void ReadString(char *s) /* 由裁判实现，略去不表 */
{
  char ch;
  int i = 0;
  while (scanf("%c", &ch) != EOF) {
    s[i++] = ch;
  }
  s[i - 1] = '\0';
}
