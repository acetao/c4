#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void prt(int *arr, int n) {
  for (int i = 0; i < n; i++) {
    printf("%d", arr[i]);
    if (i < n - 1)
      printf(" ");
  }
  printf("\n");
}

void insertion_sort(int *arr, int n) {
  for (int i = 0; i < n - 1; i++) {
    int k = i;
    for (int j = i + 1; j < n; j++)
      if (arr[j] > arr[k])
        k = j;
    if (k != i) {
      int t = arr[i];
      arr[i] = arr[k];
      arr[k] = t;
    }
  }
}

int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  int a[n];
  for (int i = 0; i < n; i++)
    scanf("%d", &a[i]);
  insertion_sort(a, n);
  prt(a, n);

  return 0;
}
