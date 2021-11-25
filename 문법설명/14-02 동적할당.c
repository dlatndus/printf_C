#include <stdio.h>

void main(void)
{
	//지역변수에 할당된 배열(스택 영역에 할당)
	int arr[4] = { 10, 20, 30, 40 };

	int count=4; //지역변수 스텍영역에 할당
	printf("원하는 int 공간의 갯수를 입력하시오 : ");
	//scanf("%d", &count);

	//키보드 입력과정은 프로그램 실행속에 진행됨
	//malloc 으로 할당된 메모리 크기는 키보드로 입력한 순간에 결정
	
	//ptr은 지역변수 스택에 할당
	int* ptr = malloc(sizeof(int) * count); //4바이트 * 공간 갯수
	ptr[0] = 10; ptr[1] = 20; ptr[2] = 30; ptr[3] = 40;
}