#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double fn(double x, int n);

int main() {
  double x;
  int n;

  scanf("%lf %d", &x, &n);
  printf("%.2f\n", fn(x, n));

  return 0;
}

/* 你的代码将被嵌在这里 */
double fn(double x, int n) {
  double sum = 0;
  double item = 1;
  int flag = 1;
  for (int i = 1; i <= n; i++) {
    item *= x;
    sum += flag * item;
    flag = -flag;
  }
  return sum;
}
