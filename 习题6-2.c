#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fn(int a, int n);
int SumA(int a, int n);

int main() {
  int a, n;

  scanf("%d %d", &a, &n);
  printf("fn(%d, %d) = %d\n", a, n, fn(a, n));
  printf("s = %d\n", SumA(a, n));

  return 0;
}

/* 你的代码将被嵌在这里 */
int fn(int a, int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++)
    sum = sum * 10 + a;
  return sum;
}
int SumA(int a, int n) {
  int sum = 0;
  for (int i = 1; i <= n; i++) {
    int s = fn(a, i);
    sum += s;
  }
  return sum;
}
