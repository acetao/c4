#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  double sum = 0, eps, item = 1;
  int i = 1, flag = 1;
  scanf("%lf", &eps);

  do{
    sum += item;
    flag = -flag;
    i += 3;
    item = 1.0 * flag / i;
  }while (fabs(item) >= eps);

  printf("sum = %.6lf\n", sum);

  return 0;
}
