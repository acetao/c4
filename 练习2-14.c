#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[]) {
  int n;
  double sum = 0.0;
  scanf("%d", &n);
  for (int i = 1; i <= n; i++) {
    sum += 1.0 / (2 * i - 1);
  }
  printf("sum = %.6f\n", sum);

  return 0;
}
