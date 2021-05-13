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

	//주사위
	int dice;

	srand( time(0) );
	dice = rand();
	printf("%d\n", dice);

}