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

	int money = 5000000;

	srand( time(0) );
	rand();

	printf("������ġ : %d, ���� �� : %d\n\n", position, money);
	
	while (1)
	{
		getchar();  //�ֻ����� ������ ���ؼ��� ����Ű�� ������ �Ѵ�.
		//�ֻ��� ������ (1���� 6����)
		dice = rand() % 6 + 1;
		position += dice;
		printf("�ֻ����� ������ %d�� ���Խ��ϴ�.\n", dice);
		printf("������ġ : %d, ���� �� : %d\n\n", position, money);
		
		//7���� �������� 3������ �̵�
		if (position == 7)
		{
			printf("3�� ��ġ�� �̵��մϴ�.\n");
			position = 3;
			printf("������ġ : %d, ���� �� : %d\n\n", position, money);
		}

		if (position > 61)
		{
			printf("�����մϴ�. �����⿡ �����Ͽ����ϴ�.\n");
			break;
		}
		
	}// while �� ��
	printf("������ �������ϴ�.");
}