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
	//����ó�� 1�� ���Ҷ� ���� �����ϴ� ����� �޸�ũ�⸸ŭ �����Ѵ�
	//ip�� 4�� ic�� 1�� ib�� 8��
	printf("%p %p %p \n", pi+1, pc+1, pd+1);
	printf("%p %p %p \n", &i+1, &c+1, &b+1);

	printf("%d %d %lf \n", i, c, b);
	printf("%d %d %lf \n", i+1, c+1, b+1.0);
}