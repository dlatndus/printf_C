#include <stdio.h>

void main(void)
{
	int num1 = 3;
	int num2 = 30;
	printf("num1안에 들어있는 값 %d\n", num1);
	printf("num2안에 들어있는 값 %d\n\n", num2);

	int* ptr = &num1;//int* ptr; ptr=&num1 가능
	*ptr = 4;
	ptr = &num2;
	*ptr = 40;

	printf("num1안에 들어있는 값 %d\n", num1);
	printf("num2안에 들어있는 값 %d\n", num2);
}