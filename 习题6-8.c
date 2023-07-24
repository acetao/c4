#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(int argc, char *argv[]) {
  char s[1000], c;
  int n = 0;
  while ((c = getchar()) != '\n') {
    if (n > 0 && c != ' ' && s[n - 1] == ' ') {
      if (c >= 'a' && c <= 'z') {
        c = c - 32; //小写字母转换为大写字母
      }
    }
    s[n++] = c;
  }
  s[n] = '\0';
  if(s[0] >= 'a' && s[0] <= 'z') //单独处理第一个字符
      s[0] -= 32;  //小写字母转换为大写字母
  puts(s);
  return 0;
}
