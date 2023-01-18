#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>

int main(int argc, char *argv[]) 
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++)
		scanf("%d", &a[i]);
	int max = a[0], maxi = 0;
	for (int i = 1; i < n; i++) {
		if (max < a[i]) {
			max = a[i];
			maxi = i;
		}
	}
	printf("%d %d\n", max, maxi);

	return 0;
}
