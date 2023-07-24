#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double funcos(double e, double x);

int main() {
  double e, x;

  scanf("%lf %lf", &e, &x);
  printf("cos(%.2f) = %.6f\n", x, funcos(e, x));

  return 0;
}

/* 你的代码将被嵌在这里 */
double funcos(double e, double x) {
  double sum = 1.0;
  double item = 1.0;
  double fz = x * x, fm = 2;
  int flag = -1;
  int i = 2;
  while (fabs(item) >= e) { //while (item >= e) 
    item = flag * fz / fm;  //item = fz / fm;
    sum += item;            //sum += flag * item;
    i++;
    fm *= i;
    i++;
    fm *= i;
    fz *= x * x;
    flag = -flag;
  }
  return sum;
}
