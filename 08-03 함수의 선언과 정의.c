#include <stdio.h>

int sum(int a, int b);
int sum2(int a, int b);

void main(void)
{
	int c = 5;
	int d = 6;
	int aaaa = sum(c,d);
	printf("%d", aaaa);
}

int sum2(int a, int b)
{
	return a + b;
}

int sum(int a, int b)
{
	return a + b;
}