#include <stdio.h>

void main(void)
{
	int arr[4] = { 10, 20, 30, 40 }; //{}로 초기화
	//배열의 시작주소값을 의미
	printf("%d\n", arr);

	/*
	printf("%d\n", arr[1]);
	printf("%d\n", arr[1]);
	printf("%d\n", arr[2]);
	printf("%d\n", arr[3]);
	*/

	//배열 내부 각각의 값을 출력
	for (int i = 0; i < 4; i++)
		printf("%d\n", arr[i]);
}