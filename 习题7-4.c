#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);
  for (int i = 0; i < m; i++) {
    int sum = 0, x;
    for (int j = 0; j < n; j++) {
      scanf("%d", &x);
      sum += x;
    }
    printf("%d\n", sum);
  }
  return 0;
}
