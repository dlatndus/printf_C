#include <stdio.h>

void main(void)
{
	int arr[4]={ 10, 20, 30, 40 }; //�̰͵� �迭�� ���/���� element/item

	for (int i = 0; i <= 3; i++)
		printf("%d\n",arr[i]);
	printf("\n");

	//arr[1] �̰� �ΰ� ���� �� *(arr+1)  
	//0��° ������ �ּ�
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);//�� ���ʿ� �̰� �ּ��� �� ������

	//0��° ������ ��� ��
	printf("arr[0] : %d\n", arr[0]); //%d �� ���� %p�� �ּҰ�
	printf("*arr : %d\n\n", *arr);
	
	//1��° ������ �ּ�
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1 : %p\n\n", arr+1);
	
	//0��° ������ ��� ��
	printf("arr[1] : %d\n", arr[1]); //%d �� ���� %p�� �ּҰ�
	printf("*(arr+1) : %d\n\n", *(arr+1));

	char str[4] = "CUT"; //�ǳ��� null ���� ������ 4�� ������� 3���ۿ� �� ����
	//0��° ������ �ּ�
	printf("&str[0] : %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//1��° ������ �ּ�
	printf("&str[1] : %p\n", &str[1]);
	printf("str+1 : %p\n\n", str+1);

	printf("arr�� 0��° �� %d %d \n", arr[0], *arr);
	printf("arr�� 1��° �� %d %d \n", arr[1], *(arr+1));
	printf("�����ϱ� *arr+1 %d \n\n",*arr + 1);

	printf("str�� 0��° �� %d %d \n", str[0], *str);
	printf("str�� 1��° �� %d %d \n", str[1], *(str + 1));
	printf("�����ϱ� *str+1 %d \n\n", *str + 1);
}