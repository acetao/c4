#include <stdio.h>
#include <math.h>

int main() {
	int m, n, tot = 0, sum = 0, i, j;
	scanf("%d %d", &m, &n);
	for (i = m; i <= n; i++) {
		for (j = 2; j <= (int)sqrt(i); j++) {
			if (i % j == 0)break;
		}
		if (j > (int)sqrt(i) && i != 1) {
			tot++;
			sum += i;
		}
	}
	printf("%d %d\n", tot, sum);
	return 0;
}
