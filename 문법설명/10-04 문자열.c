#include <stdio.h>

void main(void)
{
	char str[20] = "hello world";
	//w다음에 널문자를 주어서 문자열을 끝냄
	str[7] = '\0';
	printf("%s", str);
}