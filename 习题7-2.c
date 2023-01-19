#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash[10];

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    int x;
    scanf("%d", &x);
    if (x == 0) {
      hash[0]++;
      continue;
    }
    while (x > 0) {
      hash[x % 10]++;
      x /= 10;
    }
  }
  int max = hash[0];
  for (int i = 0; i < 10; i++) {
    if (max < hash[i])
      max = hash[i];
  }
  printf("%d:", max);
  for (int i = 0; i < 10; i++) {
    if (hash[i] == max)
      printf(" %d", i);
  }
  printf("\n");

  return 0;
}
