#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;
	void* vptr = (void* )&num;

	printf("%p %p %p \n", &num, ptr, vptr);
	printf("%d %d \n", num, *ptr);
	//에러 발생(void 포인터는 포인터 연산을 할 수 없다)
	//printf("%d \n", *vptr);
}