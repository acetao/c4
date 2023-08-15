#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);

  if (n == 3) {
    for (int i = 100; i <= 999; i++) {
      int sum = 0, tmp = i;
      while (tmp != 0) {
        int x = tmp % 10;
        sum += x * x * x;
        tmp /= 10;
      }
      if (sum == i)
        printf("%d\n", i);
    }
  }
  if (n == 4) {
    for (int i = 1000; i <= 9999; i++) {
      int sum = 0, tmp = i;
      while (tmp != 0) {
        int x = tmp % 10;
        sum += x * x * x * x;
        tmp /= 10;
      }
      if (sum == i)
        printf("%d\n", i);
    }
  }
  if (n == 5) {
    for (int i = 10000; i <= 99999; i++) {
      int sum = 0, tmp = i;
      while (tmp != 0) {
        int x = tmp % 10;
        sum += x * x * x * x * x;
        tmp /= 10;
      }
      if (sum == i)
        printf("%d\n", i);
    }
  }
  if (n == 6) {
    for (int i = 100000; i <= 999999; i++) {
      int sum = 0, tmp = i;
      while (tmp != 0) {
        int x = tmp % 10;
        sum += x * x * x * x * x * x;
        tmp /= 10;
      }
      if (sum == i)
        printf("%d\n", i);
    }
  }

  if (n == 7) {
    for (int i = 1000000; i <= 9999999; i++) {
      int sum = 0, tmp = i;
      while (tmp != 0) {
        int x = tmp % 10;
        sum += x * x * x * x * x * x * x;
        tmp /= 10;
      }
      if (sum == i)
        printf("%d\n", i);
    }
  }

  return 0;
}
