#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
������� ����� 21.05.13
��ü ĭ�� ���� 61��
�÷��̾ ������ �־�� �� ��
-��ġ���� : 0 ���� ����
-�� : 5000000 ���� ����
-������ �κ��丮 (����)
*/

void main(void)
{
	//ĭ�� �ִ� ����
	int max_length = 61;

	//�ֻ���
	int dice;

	srand( time(0) );
	dice = rand();
	printf("%d\n", dice);

}