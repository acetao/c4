#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  char c;
  while ((c = getchar()) != '\n') {
    if (c >= 'a' && c <= 'z') { //遇到小写字母
      c -= 32;                  //转换为大写字母
      c += 1;                   //后移一个字母
      if (c > 'Z')              //大写字母Z的后面是大写字母A
        c = 'A';
    } else if (c >= 'A' && c <= 'Z') {
      c += 32;
      c += 1;
      if (c > 'z')
        c = 'a';
    }
    putchar(c);
  }

  return 0;
}
