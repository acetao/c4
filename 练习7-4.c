#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 21
int used[10000000];

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
  //在数组b中检测a[i]是否存在
  for (i = 0; i < n; i++) {
    if (contains(b, m, a[i]) == 0) {
      c[k++] = a[i];
    }
  }
  //在数组a中检测b[i]是否存在
  for (i = 0; i < m; i++) {
    if (contains(a, n, b[i]) == 0) {
      c[k++] = b[i];
    }
  }
  //打印数组c[0..k-1]
  printf("%d", c[0]);
  used[c[0]] = 1; //标记c[0]已经使用
  for (int i = 1; i < k; i++) {
    if (used[c[i]] == 0) { //如果c[i]没有打印过
      printf(" %d", c[i]);
      used[c[i]] = 1; //标记c[i]已经使用过
    }
  }
  printf("\n");

  return 0;
}
