#include <stdio.h>
// 수행
void swap(int num1, int num2);

void main(void)
{
	int a = 10, b = 20;
	printf("바꾸기전 a:%d b:%d \n", a, b);
	swap(&a, &b);
	printf("바꾸기후 a:%d b:%d \n", a, b);
}
void swap(int* num1, int* num2)
{
	int temp;
	printf("%d %d %p %p\n", *num1, *num2, num1, num2);
	temp = *num1; //temp 값은 10
	printf("%d %d %d %p %p\n",temp, *num1, *num2, num1, num2);
	*num1 = *num2; //a : 20
	printf("%d %d %d %p %p\n", temp, *num1, *num2, num1, num2);
	*num2 = temp; //b : 10
	printf("%d %d %d %p %p\n", temp, *num1, *num2, num1, num2);
}