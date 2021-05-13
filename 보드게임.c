#include <stdio.h>
#include <stdlib.h>
#include<time.h>

/*
보드게임 만들기 21.05.13
전체 칸의 갯수 61개
플레이어가 가지고 있어야 할 것
-위치정보 : 0 부터 시작
-돈 : 5000000 부터 시작
-아이템 인벤토리 (나중)
*/

void main(void)
{
	//칸의 최대 갯수
	int max_length = 61;

	//플레이어의 위치
	int position = 0;

	//주사위
	int dice;

	srand( time(0) );
	rand();

	printf("현재위치 : %d\n\n", position);
	getchar();
	
	//주사위 던지기 (1부터 6까지)
	dice = rand() % 6 +1;
	position += dice;
	printf("현재위치 : %d\n\n", position);
	getchar();

	dice = rand() % 6 + 1;
	position += dice;
	printf("현재위치 : %d\n\n", position);
	getchar();

	dice = rand() % 6 + 1;
	position += dice;
	printf("현재위치 : %d\n\n", position);
	getchar();



}