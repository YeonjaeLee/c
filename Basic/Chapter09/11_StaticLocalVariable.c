#include <stdio.h>

void SimpleFunc11(void)
{
	static int num1 = 0;	// 나만 쓰는 전역 변수
	int num2 = 0;
	num1++, num2++;
	printf("static: %d, local: %d \n", num1, num2);
}

int main11(void)
{
	int i;
	for (i = 0; i < 3; i++)
	{
		SimpleFunc11();
	}
		return 0;
	
}