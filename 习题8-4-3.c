#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define MAXN 20

void CountOff(int n, int m, int out[]);

int main() {
	int out[MAXN], n, m;
	int i;

	scanf("%d %d", &n, &m);
	CountOff(n, m, out);
	for (i = 0; i < n; i++)
		printf("%d ", out[i]);
	printf("\n");

	return 0;
}

/* 你的代码将被嵌在这里 */
void CountOff(int n, int m, int out[]) {
	int visited[n + 1];
	int i;
	int cnt = 0;
	for (i = 1; i <= n; i++) {
		visited[i] = 1; 	//i还未被访问
	}
	i = 1;
	while (cnt < n) {		//报数还没有结束
		int k = 1;			//每次报数从1开始
		while (k < m) {		//报数还没有达到m
			if (visited[i] == 0) {
				i++;
				if (i > n) 
					i = 1;
				if(visited[i] == 1)
					k++;
			} else {
				k++;
				i++;
				if (i > n) i = 1;
				if(visited[i] == 0)
					k--;
			}
		}
		++cnt;
		//printf("i = %d, cnt = %d\n", i, cnt);
		out[i - 1] = cnt;
		visited[i] = 0;
		
		while(cnt < n && visited[i] == 0){
			i++;
			if (i > n) i = 1;
		}
	}
}
