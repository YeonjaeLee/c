// CH13.포인터와 배열

#include <stdio.h>

/*
문제1
길이가 6인 int형 배열을 선언하여 1, 2, 3, 4, 5, 6 으로 초기화 한다.
새로운 배열을 생성하여 저장된 값의 순서를 뒤집어 저장하는 프로그램을 작성하시오.

작성 방식은 포인터의 증가, 감소 형태로~
*/

int main7(void)
{
	int input[6] = { 1, 2, 3, 4, 5, 6 };
	int output[6] = { 0 };
	int * pnt = input;

	printf("배열 출력:\t{");
	for (int i = 5; i > -1; i--)
	{
		output[i] = *pnt;
		printf("%d ,", *pnt);
		pnt++;
	}
	printf("\b\b} \n");

	printf("역순 배열 출력:\t{");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ,", output[i]);
	}
	printf("\b\b} \n");

	return 0;
}
