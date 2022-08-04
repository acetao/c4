#include <stdio.h>

int main(int argc, char* argv[])
{
	int f = 150, c;
	c = 5 * (f - 32) / 9;
	printf("fahr = %d, celsius = %d\n", f, c);

	return 0;
}
