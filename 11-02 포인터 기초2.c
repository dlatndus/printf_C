#include <stdio.h>

void main(void)
{
	int num1 = 3;
	int a = num1;
	printf("num1�� %d, a�� %d\n", num1, a);
	a = 4;
	printf("num1�� %d, a�� %d\n", num1, a);

	int num2 = 30;
	int* ptr = &num2;
	printf("num2�� %d, ptr�� %p\n", num2, ptr);
	
	//ptr�� ����Ű�� ����(����)�� ���ΰ��� 40���� �ٲ۴�
	*ptr = 40;//�̷��� �Ǹ� ptr�� num2�� �ּҰ��� �ٲ��� ������ �ȿ� �ִ� 30�� 40���� �ٲ��(��������)
	printf("num2�� %d, ptr�� %p\n", num2, ptr);

	//���� ������ ���ΰ��� 50���� �ٲ۴�
	num2 = 50;
	printf("num2�� %d, ptr�� %p\n", num2, ptr);
}