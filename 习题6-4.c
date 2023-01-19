#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int fib(int n);
void PrintFN(int m, int n);

int main() {
  int m, n, t;

  scanf("%d %d %d", &m, &n, &t);
  printf("fib(%d) = %d\n", t, fib(t));
  PrintFN(m, n);

  return 0;
}

/* 你的代码将被嵌在这里 */
int fib(int n) {
  int f1 = 1, f2 = 1, f3 = 1;
  for (int i = 3; i <= n; i++) {
    f3 = f1 + f2;
    f1 = f2;
    f2 = f3;
  }
  return f3;
}
void PrintFN(int m, int n) {
  int i = 1, j = 1, flag = 0;
  while (fib(i) < m)
    i++;
  while (fib(j) <= n)
    j++;
  j--;
  printf("i = %d, j = %d, fib(%d) = %d, fib(%d) = %d\n", i, j, i, fib(i), j,
         fib(j));
  for (int k = i; k <= j; k++) {
    if (k == i)
      printf("%d", fib(k));
    else
      printf(" %d", fib(k));
    flag = 1;
  }
  if (flag == 0)
    printf("No Fibonacci number\n");
  else
    printf("\n");
}
