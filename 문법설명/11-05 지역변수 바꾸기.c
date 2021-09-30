#include <stdio.h>


void changeA(int num);

void main(void)
{
	int A = 3;
	printf("바꾸기전 %d \n", A);
	//변수 A를 넘겨주는 것이 아닌 A안에 들어있는 3을 num에게 넘겨준다
	changeA(A);
	printf("바꾸기후 %d \n", A);
}
void changeA(int num)
{
	num = 5;
}