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

	//�÷��̾��� ��ġ
	int position = 0;

	//�ֻ���
	int dice;

	srand( time(0) );
	rand();

	printf("������ġ : %d\n\n", position);
	getchar();
	
	//�ֻ��� ������ (1���� 6����)
	dice = rand() % 6 +1;
	position += dice;
	printf("������ġ : %d\n\n", position);
	getchar();

	dice = rand() % 6 + 1;
	position += dice;
	printf("������ġ : %d\n\n", position);
	getchar();

	dice = rand() % 6 + 1;
	position += dice;
	printf("������ġ : %d\n\n", position);
	getchar();



}