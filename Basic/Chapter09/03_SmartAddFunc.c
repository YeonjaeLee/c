#include <stdio.h>

int Add3(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult3(int num)
{
	printf("덧셈결과 출력: %d \n", num);
}

int ReadNum3(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg3(void)
{
	printf("두 개의 정수를 입력하시면 덧셈결과가 출력됩니다. \n");
	printf("자! 그럼 두 개의 정수를 입력하세요. \n");
}

int main3(void)
{
	int result, num1, num2;
	HowToUseThisProg3();
	num1 = ReadNum3();
	num2 = ReadNum3();

	result = Add3(num1, num2);
	ShowAddResult3(result);	

	return 0;
}