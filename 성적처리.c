#include <stdio.h>

//입력받은 점수에 대한 등급을 출력

void cal_grade(int score);
double cal_average(int score_C, int score_j, int score_CA);

void main(void)
{
	int score[3];
	
	printf("C 점수를 입력하세요 : ");
	scanf("%d", &score[0]);
	cal_grade(score[0]);
	
	printf("java 점수를 입력하세요 : ");
	scanf("%d", &score[1]);
	cal_grade(score[1]);

	printf("CA 점수를 입력하세요 : ");
	scanf("%d", &score[2]);
	cal_grade(score[2]);
	
	double average = cal_average(score[0], score[1], score[2]);
	printf("세 과목의 평균의 %f입니다", average);
}

void cal_grade(int score)
{
	if (90 <= score && score <= 100)
		printf("A입니다\n");
	else if (80 <= score)
		printf("B입니다\n");
	else if (70 <= score)
		printf("C입니다\n");
	else if (60 <= score)
		printf("D입니다\n");
	else
		printf("E입니다\n");
}

//세과목의 평균을 반환
double cal_average(int score_C, int score_j, int score_CA)
{
	return (double)(score_C + score_j + score_CA) / (double)3;
}
