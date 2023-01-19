#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void rev(char s[], int n) {
  for (int i = 0; i < n / 2; i++) {
    char t = s[i];
    s[i] = s[n - i - 1];
    s[n - i - 1] = t;
  }
}

int main(int argc, char *argv[]) {
  char s[100], ch;
  int i = 0;
  while ((ch = getchar()) != '\n') {
    s[i++] = ch;
  }
  s[i] = '\0';
  rev(s, (int)strlen(s));
  puts(s);
  return 0;
}
