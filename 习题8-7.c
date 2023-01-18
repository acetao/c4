#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

char s[5][81];

int main() {
  int n = 5;
  for (int i = 0; i < n; i++)
    scanf("%s", s[i]);
  char temp[81];
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(s[j], s[j + 1]) > 0) {
        strcpy(temp, s[j]);
        strcpy(s[j], s[j + 1]);
        strcpy(s[j + 1], temp);
      }
    }
  }
  printf("After sorted:\n");
  for (int i = 0; i < 5; i++)
    printf("%s\n", s[i]);
  return 0;
}
