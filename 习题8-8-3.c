#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define MAXN 20
typedef enum { false, true } bool;

bool palindrome(char *s);

int main() {
  char s[MAXN];

  scanf("%s", s);
  if (palindrome(s) == true)
    printf("Yes\n");
  else
    printf("No\n");
  printf("%s\n", s);

  return 0;
}

/* 你的代码将被嵌在这里 */

bool palindrome(char *s) {
  char *p = s;
  while (*p)
    p++;
  p--;
  while (s < p) {
    if (*s != *p)
      return false;
    else {
      s++;
      p--;
    }
  }
  return true;
}
