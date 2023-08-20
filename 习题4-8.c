#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char const *argv[]) {
  int n, i;
  double h, sum; /* 为了方便计算,高度采用双精度类型 */

  scanf("%lf%d", &h, &n); /* 输入双精度需要采用%lf格式而不是%f格式 */

  if (n == 0) {
    printf("0.0 0.0\n"); /* 打印结果,保留一位小数 */
    return 0;
  }

  sum = h;                 /* 第一次落地 */
  for (i = 2; i <= n; i++) /* 后面还有n-1次落地 */
  {
    h = h / 2.0;              /* 反弹高度 */
    /*printf("%.1lf\n", h);*/ /* 打印每次反弹的高度 */
    sum += h * 2; /* 反弹后还要落下来,落下的距离和反弹的高度是相等的 */
  }
  h = h / 2.0;                     /* 最后一次反弹的高度 */
  printf("%.1lf %.1lf\n", sum, h); /* 打印结果,保留一位小数 */

  return 0;
}
