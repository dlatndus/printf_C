#include <stdio.h>

void main(void)
{
	//���� ������ ����
	int a = 1;
	int* ap = &a;

	double b = 1.2;
	double* bp = &b;
	
	char c = "A";
	char* cp = &c;

	//���
	printf("a�� %p\n", &ap);
	printf("b�� %p\n", &bp);
	printf("c�� %p\n", &cp);

	//����, ������ ���� ũ��
	int asize = sizeof a;
	int apsize = sizeof ap;
	printf("a�� ũ�� : %d\n", asize); //sizeof(a) �ص� ����
	printf("ap�� ũ�� : %d\n", apsize); //sizeof(ap) �ص� ����

	int bsize = sizeof b;
	int bpsize = sizeof bp;
	printf("b�� ũ�� : %d\n", bsize);
	printf("bp�� ũ�� : %d\n", bpsize);

	int csize = sizeof c;
	int cpsize = sizeof cp;
	printf("c�� ũ�� : %d\n", csize);
	printf("cp�� ũ�� : %d\n", cpsize);
}