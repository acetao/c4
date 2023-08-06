#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int m[10][10];

int main(int argc, char *argv[]) {
  int T;
  scanf("%d", &T);
  while (T--) {
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
      for (int j = 0; j < n; j++)
        scanf("%d", &m[i][j]);
    //判断主对角线以下的元素是否全部为0
    int flag = 1; //假定成立
    for (int i = 1; i < n; i++) {
      for (int j = 0; j < i; j++) {
        if (m[i][j] != 0) { //如果发现有不为0的元素
          flag = 0;         //不是
          break;
        }
      }
    }
    if (flag == 1)         //假定仍然成立
      printf("YES\n");
    else                   //假定不成立，不是上三角矩阵
      printf("NO\n");
  }

  return 0;
}
