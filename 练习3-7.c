#define _CRT_SECURE_NO_WARNINGS
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]) {
  int grade;
  scanf("%d", &grade);

  if (grade >= 90)
    printf("A\n");
  else if (grade >= 80)
    printf("B\n");
  else if (grade >= 70)
    printf("C\n");
  else if (grade >= 60)
    printf("D\n");
  else
    printf("E\n");

  return 0;
}
