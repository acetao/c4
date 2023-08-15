#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int a[6][6];
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[i][j]);
    }
  }
  //记录鞍点所在行、列
  int ans_row = 0, ans_col = 0;
  int found = 0;                // 0表示没有鞍点，1表示有鞍点
  for (int i = 0; i < n; i++) { //逐行处理:求每行最大值
    int max = a[i][0];
    int max_row = i;
    int max_col = 0;
    for (int j = 1; j < n; j++) {
      if (a[i][j] > max) {
        max = a[i][j];
        max_row = i;
        max_col = j;
      }
    }

    // min记录最大值所在列的最小值
    int min = a[0][max_col];
    int min_row = 0; //记录最小值所在的行
    for (int k = 1; k < n; k++) {
      if (a[k][max_col] < min) {
        min = a[k][max_col];
        min_row = k;
      }
    }
    if (max_row == min_row) { //检测最大值、最小值是否重合在一个位置
      found = 1;
      ans_row = max_row;
      ans_col = max_col;
      break;
    }
  }

  if (found == 1) {
    printf("%d %d\n", ans_row, ans_col);
  } else {
    printf("NONE\n");
  }
  return 0;
}
