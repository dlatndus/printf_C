#include<stdio.h>

void main(void)
{
	int a = 3;
	switch (a)
	{
	case 1: 
		printf("qwerty\n");
	case 2:
		printf("yee\n");
	default :
		printf("ddd\n");
	}
	
	if (a == 1)
	{
		printf("qwerty");

	}
	else if (a == 2)
	{
		printf("yee");
	}
	else
	{
		printf("ddd");
	}
}