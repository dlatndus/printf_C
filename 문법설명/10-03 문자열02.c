#include <stdio.h>

void main(void)
{
	char str[20] = "Hello World";

	//널문자가 아닐때까지 출력
	for (int i = 0; str[i] !='\0';  i++)
		printf("%c", str[i]);
}