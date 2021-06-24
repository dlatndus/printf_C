#include<stdio.h>

void main(void)
{
	/*
	int i;
	for (i = 1; i <= 9; i++) {
		printf("2 X %d = %d\n", i, i * 2 );
	}
	*/


	/*
	int i = 1;
	while (i <= 9)
	{
		printf("%d X %d = %d\n", dan, i, dan * i);
		i++;
	}
	*/
	/*
	int dan = 2;
	while ( dan <= 9 )
	{
		int i = 1;
		while ( i <= 9)
		{
			printf("%d X %d = %d\n", dan, i, dan * i);
			i++;
		}
		
		printf("\n");
		dan++;
	}*/

	int dan = 2;
	for (dan=2; dan <= 9; dan++)
	{
		if (dan == 4)//바깥쪽 포문
		{
			break; // 바깥쪽 for문을 벗어난다
		}
		int i = 1;
		for (i=1; i <= 9; i++)//안쪽포문
		{
			if (i == 5)
			{
				break;//안쪽 for문을 벗어난다
			}
			printf("%d X %d = %d\n", dan, i, dan * i);
		}

		printf("\n");
	}
	/*
	printf("2 X 2 = %d\n", 2*2);
	printf("2 X 3 = %d\n", 2*3);
	printf("2 X 4 = %d\n", 2*4);
	printf("2 X 5 = %d\n", 2*5);
	printf("2 X 6 = %d\n", 2*6);
	printf("2 X 7 = %d\n", 2*7);
	printf("2 X 8 = %d\n", 2*8);
	printf("2 X 9 = %d\n", 2*9);
	*/


	
}