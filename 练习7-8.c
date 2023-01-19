#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define N 6
int a[N][N];

void shift_right(int arr[], int n, int m) {
  while (m--) {
    int temp = arr[n - 1]; //暂存最后一个元素
    for (int i = n - 1; i >= 1; i--)
      arr[i] = arr[i - 1];
    arr[0] = temp;
  }
}
int main(int argc, char *argv[]) {
  int m, n;
  scanf("%d %d", &m, &n);
  for (int i = 0; i < n; i++)
    for (int j = 0; j < n; j++)
      scanf("%d", &a[i][j]);
  for (int i = 0; i < n; i++) {
    shift_right(a[i], n, m);
  }
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      printf("%d ", a[i][j]);
    }
    printf("\n");
  }

  return 0;
}
