#include <stdio.h>

//�Է¹��� ������ ���� ����� ���

void cal_grade(int score);
double cal_average(int score_C, int score_j, int score_CA);

void main(void)
{
	int score[3];
	
	printf("C ������ �Է��ϼ��� : ");
	scanf("%d", &score[0]);
	cal_grade(score[0]);
	
	printf("java ������ �Է��ϼ��� : ");
	scanf("%d", &score[1]);
	cal_grade(score[1]);

	printf("CA ������ �Է��ϼ��� : ");
	scanf("%d", &score[2]);
	cal_grade(score[2]);
	
	double average = cal_average(score[0], score[1], score[2]);
	printf("�� ������ ����� %f�Դϴ�", average);
}

void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A�Դϴ�\n");
	else if (80 <= score)
		printf("B�Դϴ�\n");
	else if (70 <= score)
		printf("C�Դϴ�\n");
	else if (60 <= score)
		printf("D�Դϴ�\n");
	else
		printf("E�Դϴ�\n");
}

//�������� ����� ��ȯ
double cal_average(int score_C, int score_j, int score_CA)
{
	return (double)(score_C + score_j + score_CA) / (double)3;
}
