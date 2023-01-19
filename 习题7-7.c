#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
char s[N];
char m[] = {"ZYXWVUTSRQPONMLKJIHGFEDCBA"};

int main(int argc, char *argv[]) {
  char ch;
  int i = 0;
  while ((ch = getchar()) != '\n') {
    if (ch >= 'A' && ch <= 'Z') {
      s[i++] = m[ch - 'A'];
    } else {
      s[i++] = ch;
    }
  }
  s[i] = '\0';
  puts(s);

  return 0;
}
