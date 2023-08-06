#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int a, b;
  char op;
  scanf("%d%c%d", &a, &op, &b);
  while (1) {
    if (op == '+')
      a += b;
    else if (op == '-')
      a -= b;
    else if (op == '*')
      a *= b;
    else if (op == '/') {
      if (b == 0) { //分母为0
        printf("ERROR\n");
        return 0;
      } else {
        a /= b;
      }
    } else if (op == '=')
      break;
    else { //非法运算符
      printf("ERROR\n");
      return 0;
    }
    scanf("%c", &op);
    if (op == '=')
      break;
    scanf("%d", &b);
  }
  printf("%d\n", a);

  return 0;
}
