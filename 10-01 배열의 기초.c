#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 }; //{}�� �ʱ�ȭ
	//�迭�� �����ּҰ��� �ǹ�
	printf("%d\n", arr);

	/*
	printf("%d\n", arr[1]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	*/

	//�迭 ���� ������ ���� ���
	for (int i = 0; i < 4; i++)
		printf("%d\n", arr[i]);
}