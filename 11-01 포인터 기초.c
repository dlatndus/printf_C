#include <stdio.h>

void main(void)
{
	int num = 3;
	int* ptr = &num;

	printf("num 안에 들어있는 값 %d\n", num);
	printf("num의 메모리 주소값 %p\n", &num);
	printf("ptr 안에 들어있는 값 %p\n", ptr);
	//포인터 변수도 별도의 메모릭 주소(공간)에 할당되있다.
	printf("ptr의 메모리 주소값 %p\n", &ptr);
	printf("ptr이 가리키는 변수 안에 들어있는 값 %d\n", *ptr);
}