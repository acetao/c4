#include <stdio.h>

int main() {
	int n, res = 0x70000000;
	scanf("%d", &n);
	while (n--) {
		int x;
		scanf("%d", &x);
		if(x < res)res = x;
		
	}
	printf("min = %d\n", res);
	return 0;
}
