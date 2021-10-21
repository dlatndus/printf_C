#include <stdio.h>

void main(void)
{
	//변수 포인터 선언
	int a = 1;
	int* ap = &a;

	double b = 1.2;
	double* bp = &b;
	
	char c = "A";
	char* cp = &c;

	//출력
	printf("a는 %p\n", &ap);
	printf("b는 %p\n", &bp);
	printf("c는 %p\n", &cp);

	//변수, 포인터 변수 크기
	int asize = sizeof a;
	int apsize = sizeof ap;
	printf("a의 크기 : %d\n", asize); //sizeof(a) 해도 나옴
	printf("ap의 크기 : %d\n", apsize); //sizeof(ap) 해도 나옴

	int bsize = sizeof b;
	int bpsize = sizeof bp;
	printf("b의 크기 : %d\n", bsize);
	printf("bp의 크기 : %d\n", bpsize);

	int csize = sizeof c;
	int cpsize = sizeof cp;
	printf("c의 크기 : %d\n", csize);
	printf("cp의 크기 : %d\n", cpsize);
}