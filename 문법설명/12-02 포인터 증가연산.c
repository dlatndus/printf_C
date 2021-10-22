#include <stdio.h>

void main(void)
{
	int i = 1;
	char c = 2;
	double b = 3.0f;

	int* pi = &i;
	char* pc = &c;
	double* pd = &b;

	printf("%p %p %p \n", pi, pc, pd);
	//포인처에 1을 더할때 마다 참조하는 대상의 메모리크기만큼 증가한다
	//ip는 4씩 ic는 1씩 ib는 8씩
	printf("%p %p %p \n", pi+1, pc+1, pd+1);
	printf("%p %p %p \n", &i+1, &c+1, &b+1);

	printf("%d %d %lf \n", i, c, b);
	printf("%d %d %lf \n", i+1, c+1, b+1.0);
}