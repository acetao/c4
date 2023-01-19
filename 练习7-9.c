#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int hash[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main(int argc, char *argv[]) {
  int year, month, day;
  char ch; //接收/
  scanf("%d%c%d%c%d", &year, &ch, &month, &ch, &day);
  int flag = ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0);

  int sum = 0;
  for (int i = 1; i < month; i++)
    sum += hash[i]; //累加1月份到month-1月份的天数
  sum += day;       //累加当月的天数
  if (flag && month > 2) //闰年且月份超过2月份，多加一天
    sum++;
  printf("%d\n", sum);

  return 0;
}
