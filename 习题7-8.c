#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

long convert(char s[]) {
  int n = strlen(s);
  long sum = 0;
  long base = 1;
  for (int i = n - 1; i >= 0; i--) {
    if (s[i] >= '0' && s[i] <= '9') {
      sum += (s[i] - '0') * base;
    } else {
      sum += (s[i] - 'a' + 10) * base;
    }
    base *= 16;
  }
  return sum;
}

int main(int argc, char *argv[]) {
  char s[100], c;
  int n = 0;
  while ((c = getchar()) != '\n') {
    if (c >= 'A' && c <= 'Z')
      c += 32; //转换为小写字母
    s[n++] = c;
  }
  s[n] = '\0';
  int i = 0;
  int positive = 0;
  //找第一个合法的16进制字符
  while (s[i] != 'x' && !(s[i] >= '0' && s[i] <= '9') &&
         !(s[i] >= 'a' && s[i] <= 'f')) {
    if (s[i] == '#')
      break;
    i++;
  }
  if (s[i] == '#') { //没有合法的16进制字符
    printf("0\n");
    return 0;
  }
  if (i == 0) {
    //如果第一个字符就是合法的16进制字符
    positive = 1; //则该数为整数
  } else {        //判断第一个16进制字符前面的+、-符号
    if (s[i - 1] == '+')
      positive = 1;
    else
      positive = 0;
  }
  char t[100];
  int j = 0;
  if (s[i] == 'x')
    i++;               //略过x
  for (; i < n; i++) { //将合法的16进制字符拷贝到字符数组t[]中
    if (s[i] >= '0' && s[i] <= '9' || s[i] >= 'a' && s[i] <= 'f') {
      t[j++] = s[i];
    }
  }
  t[j] = '\0';
  long sum = convert(t); //调用函数将16进制字符串转换为长整数
  if (positive)
    printf("%ld\n", sum);
  else
    printf("%ld\n", -sum);

  return 0;
}
