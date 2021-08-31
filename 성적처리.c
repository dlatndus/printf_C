#include <stdio.h>

void main(void)
{
	int C_score;
	printf("C 점수를 입력하세요 : ");
	scanf("%d", &C_score);

	//if(0<= score && score <=100)

	if (90 <= C_score && C_score <=100 )
		printf("A입니다\n");
	else if (80 <= C_score)
		printf("B입니다\n");
	else if (70 <= C_score)
		printf("C입니다\n");
	else if (60 <= C_score)
		printf("D입니다\n");
	else
		printf("E입니다\n");

	{
		int java_score;
		printf("java 점수를 입력하세요 : ");
		scanf("%d", &java_score);

		//if(0<= score && score <=100)

		if (90 <= java_score && java_score <= 100)
			printf("A입니다\n");
		else if (80 <= java_score)
			printf("B입니다\n");
		else if (70 <= java_score)
			printf("C입니다\n");
		else if (60 <= java_score)
			printf("D입니다\n");
		else
			printf("E입니다\n");
	}

	{
		int CA_score;
		printf("CA 점수를 입력하세요 : ");
		scanf("%d", &CA_score);

		//if(0<= score && score <=100)

		if (90 <= CA_score && CA_score <= 100)
			printf("A입니다\n");
		else if (80 <= CA_score)
			printf("B입니다\n");
		else if (70 <= CA_score)
			printf("C입니다\n");
		else if (60 <= CA_score)
			printf("D입니다\n");
		else
			printf("E입니다\n");
	}

}