#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>

double dist(double x1, double y1, double x2, double y2);

int main() {
  double x1, y1, x2, y2;

  scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
  printf("dist = %.2f\n", dist(x1, y1, x2, y2));

  return 0;
}

/* 你的代码将被嵌在这里 */
double dist(double x1, double y1, double x2, double y2) {
  return sqrt((x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2));
}
