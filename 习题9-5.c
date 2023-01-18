#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Node {
  char name[11];
  char birth[10];
  char phone[20];
} Node;
Node a[10];

//通讯录排序：按照年龄从大到小（生日字符串越小，年龄越大）
void mysort(Node *p, int n) {
  Node temp;
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (strcmp(p[j].birth, p[j + 1].birth) > 0) {
        temp = p[j];
        p[j] = p[j + 1];
        p[j + 1] = temp;
      }
    }
  }
}
int main(int argc, char *argv[]) {
  int n;
  scanf("%d", &n);
  for (int i = 0; i < n; i++) {
    scanf("%s %s %s", a[i].name, a[i].birth, a[i].phone);
  }
  mysort(a, n);

  //打印
  for (int i = 0; i < n; i++) {
    printf("%s %s %s\n", a[i].name, a[i].birth, a[i].phone);
  }

  return 0;
}
