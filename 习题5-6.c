#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int narcissistic(int number);
void PrintN(int m, int n);

int main() {
  int m, n;

  scanf("%d %d", &m, &n);
  if (narcissistic(m))
    printf("%d is a narcissistic number\n", m);
  PrintN(m, n);
  if (narcissistic(n))
    printf("%d is a narcissistic number\n", n);

  return 0;
}

/* 你的代码将被嵌在这里 */
int narcissistic(int number) {
  int digits = 0, sum = 0, temp;
  if (number >= 100 && number <= 999)
    digits = 3;
  else if (number >= 1000 && number <= 9999)
    digits = 4;
  else
    digits = 5;
  temp = number;
  if (digits == 5)
    return 0;
  if (digits == 3) {
    while (number > 0) {
      int x = number % 10;
      sum += x * x * x;
      number /= 10;
    }
    if (sum == temp)
      return 1;
    else
      return 0;
  }
  if (digits == 4) {
    while (number > 0) {
      int x = number % 10;
      sum += x * x * x * x;
      number /= 10;
    }
    if (sum == temp)
      return 1;
    else
      return 0;
  }
  return 0;
}
void PrintN(int m, int n) {
  if (narcissistic(m) == 1)
    m++;
  if (narcissistic(n) == 1)
    n--;
  for (int i = m; i <= n; i++) {
    if (narcissistic(i) == 1)
      printf("%d\n", i);
  }
}
