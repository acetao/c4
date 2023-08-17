#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Date {
  int hour, minute, second;
} Date;

void calc(Date *d, int n) {
  d->second += n;
  if (d->second >= 60) {
    d->second -= 60;
    d->minute += 1;
    if (d->minute >= 60) {
      d->minute -= 60;
      d->hour += 1;
      if (d->hour >= 24)
        d->hour = 0;
    }
  }
  printf("%02d:%02d:%02d\n", d->hour, d->minute, d->second);
}

int main(int argc, char *argv[]) {
  Date date;
  int n;
  scanf("%d:%d:%d", &date.hour, &date.minute, &date.second);
  scanf("%d", &n);

  calc(&date, n);

  return 0;
}
