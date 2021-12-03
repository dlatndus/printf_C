#include <stdio.h>

typedef struct{
	int x;
	int y;
}Point;

void main(void)
{
	//선언과 동시에 초기화
	//struct 안써도 됨
	Point p1 = { 10, 20 };

	
	Point p2;
	p2.x = 20;
	p2.y = 40;

	printf("(%d, %d)\n", p1.x, p1.y);
	printf("(%d, %d)\n", p2.x, p2.y);

	//int 변수가 2개 들어있어서 8 바이트
	printf("구조체의 크기는 %d", sizeof(p1));
}