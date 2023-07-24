#include <stdio.h>

int main() {
	int n, a = 0, b = 0, c = 0, d = 0, e = 0;
	scanf("%d", &n);
	while (n--) {
		int cj;
		scanf("%d", &cj);
		if (cj >= 90)a++;
		else if (cj >= 80)b++;
		else if (cj >= 70)c++;
		else if (cj >= 60)d++;
		else e++;
	}
	printf("%d %d %d %d %d\n", a, b, c, d, e);
	return 0;
}
