#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) {
  int speed, limit;
  scanf("%d%d", &speed, &limit);
  int overspeed = speed - limit;
  if (overspeed < limit * 0.1)
    printf("OK\n");
  else if (overspeed >= limit * 0.1 && overspeed < limit * 0.5)
    printf("Exceed %d%%. Ticket 200\n", (int)(1.0 * overspeed / limit * 100 + 0.5));
  else
    printf("Exceed %d%%. License Revoked\n", (int)(1.0 * overspeed / limit * 100 + 0.5));

  return 0;
}
