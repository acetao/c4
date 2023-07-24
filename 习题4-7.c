#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int gcd(int a, int b) {
  if (b == 0)
    return a;
  int r = a % b;
  while (r != 0) {
    a = b;
    b = r;
    r = a % b;
  }
  return b;
}

int lcm(int a, int b) { return a / gcd(a, b) * b; }

int main(int argc, char *argv[]) {
  int a, b;
  scanf("%d %d", &a, &b);
  printf("%d %d\n", gcd(a, b), lcm(a, b));

  return 0;
}
