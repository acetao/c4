#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 21

int contains(int a[], int n, int key) {
  for (int i = 0; i < n; i++) {
    if (a[i] == key)
      return 1;
  }
  return 0;
}

int main(int argc, char *argv[]) {
  int a[N], b[N], c[2 * N];
  int n, m;
  int i, j, k;
  scanf("%d", &n);
  for (i = 0; i < n; i++)
    scanf("%d", &a[i]);
  scanf("%d", &m);
  for (i = 0; i < m; i++)
    scanf("%d", &b[i]);
  k = 0;
  //检测a[i]是否存在于数组b和c中
  for (i = 0; i < n; i++) {
    int flag1 = 1, flag2 = 1;
    if (contains(b, m, a[i]) == 0) {
      flag1 = 0;
    }
    if (contains(c, k, a[i]) == 0) {
      flag2 = 0;
    }
    if (flag1 == 0 && flag2 == 0)
      c[k++] = a[i];
  }
  //检测b[i]是否存在于数组a和c中
  for (i = 0; i < m; i++) {
    int flag1 = 1, flag2 = 1;
    if (contains(a, n, b[i]) == 0) {
      flag1 = 0;
    }
    if (contains(c, k, b[i]) == 0) {
      flag2 = 0;
    }
    if (flag1 == 0 && flag2 == 0) {
      c[k++] = b[i];
    }
  }
  //打印数组c[0..k-1]
  printf("%d", c[0]);
  for (int i = 1; i < k; i++) {
    printf(" %d", c[i]);
  }
  printf("\n");

  return 0;
}
