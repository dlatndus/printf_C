#include <stdio.h>

void main(void)
{
	int arr[4]={ 10, 20, 30, 40 }; //이것들 배열의 요소/원소 element/item

	for (int i = 0; i <= 3; i++)
		printf("%d\n",arr[i]);
	printf("\n");

	//arr[1] 이거 두개 같은 말 *(arr+1)  
	//0번째 공간의 주소
	printf("&arr[0] : %p\n", &arr[0]);
	printf("arr	: %p\n\n", arr);//걍 애초에 이게 주소임 걍 같은거

	//0번째 공간의 요소 값
	printf("arr[0] : %d\n", arr[0]); //%d 는 정수 %p는 주소값
	printf("*arr : %d\n\n", *arr);
	
	//1번째 공간의 주소
	printf("&arr[1] : %p\n", &arr[1]);
	printf("arr+1 : %p\n\n", arr+1);
	
	//0번째 공간의 요소 값
	printf("arr[1] : %d\n", arr[1]); //%d 는 정수 %p는 주소값
	printf("*(arr+1) : %d\n\n", *(arr+1));

	char str[4] = "CUT"; //맨끝에 null 문자 때문에 4개 잡았지만 3개밖에 못 넣음
	//0번째 공간의 주소
	printf("&str[0] : %p\n", &str[0]);
	printf("str	: %p\n\n", str);

	//1번째 공간의 주소
	printf("&str[1] : %p\n", &str[1]);
	printf("str+1 : %p\n\n", str+1);

	printf("arr의 0번째 값 %d %d \n", arr[0], *arr);
	printf("arr의 1번째 값 %d %d \n", arr[1], *(arr+1));
	printf("주의하기 *arr+1 %d \n\n",*arr + 1);

	printf("str의 0번째 값 %d %d \n", str[0], *str);
	printf("str의 1번째 값 %d %d \n", str[1], *(str + 1));
	printf("주의하기 *str+1 %d \n\n", *str + 1);
}