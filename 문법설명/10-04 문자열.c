#include <stdio.h>

void main(void)
{
	char str[20] = "hello world";
	//w������ �ι��ڸ� �־ ���ڿ��� ����
	str[7] = '\0';
	printf("%s", str);
}