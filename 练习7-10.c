#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 100
char s[N];

int find_char(char s[], int n, char key) {
  for (int i = n - 1; i >= 0; i--) {
    if (key == s[i])
      return i;
  }
  return -1;
}
int main(int argc, char *argv[]) {
  char key, c;
  int i = 0;
  key = getchar();
  getchar();
  while ((c = getchar()) != '\n') {
    s[i++] = c;
  }
  s[i] = '\0';
  int index = find_char(s, i, key);
  if (index == -1)
    printf("Not Found\n");
  else
    printf("index = %d\n", index);

  return 0;
}
