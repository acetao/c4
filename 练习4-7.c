#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  double fm = 1.0, sum = 1;
  for (int i = 1; i <= n; i++) {
    fm = fm * i;
    sum += 1.0 / fm;
  }
  printf("%.8lf\n", sum);

  return 0;
}
