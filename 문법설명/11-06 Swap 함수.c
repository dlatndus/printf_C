#include <stdio.h>
// ����
void swap(int num1, int num2);

void main(void)
{
	int a = 10, b = 20;
	printf("�ٲٱ��� a:%d b:%d \n", a, b);
	swap(&a, &b);
	printf("�ٲٱ��� a:%d b:%d \n", a, b);
}
void swap(int* num1, int* num2)
{
	int temp;
	printf("%d %d %p %p\n", *num1, *num2, num1, num2);
	temp = *num1; //temp ���� 10
	printf("%d %d %d %p %p\n",temp, *num1, *num2, num1, num2);
	*num1 = *num2; //a : 20
	printf("%d %d %d %p %p\n", temp, *num1, *num2, num1, num2);
	*num2 = temp; //b : 10
	printf("%d %d %d %p %p\n", temp, *num1, *num2, num1, num2);
}