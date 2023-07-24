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
  if (n == 1)
    return x;
  return x - x * fn(x, n - 1);
}
/**
 * f(x, n) = x - x^2 + x^3 - x^4 + ... + (-1)^(n-1)x^n
 *         = x - x(x - x^2 + x^3 - x^4 + ... + (-1)^(n-2)x^(n-1))
 *         = x - x * fn(x, n - 1);
 */
