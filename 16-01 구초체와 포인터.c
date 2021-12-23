#include <stdio.h>

typedef struct{
	int x;
	int y;
}Point;

void main(void)
{
	//지역변수는 a는 stack 영역에 할당된다.
	Point a = { 3,4 };
	printf("%d, %d\n", a.x, a.y);

	Point* ptr = &a;

	//아래 두 식은 같은 식이다.
	printf("%d, %d\n", (*ptr).x, (*ptr).y);
	printf("%d, %d\n", ptr->x, ptr->y);
}