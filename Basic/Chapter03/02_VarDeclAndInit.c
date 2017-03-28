//#pragma warning( disable : 4700 )

#include <stdio.h>

int main2(void)
{
	int num1, num2;
	int num3 = 30, num4 = 40;

	//초기화되지 않은 변수를 사용하면 실행 안됨.
	//printf("num1: %d, num2: %d \n", num1, num2);
	num1 = 10;
	num2 = 20;

	printf("num1: %d, num2: %d \n", num1, num2);
	printf("num3: %d, num4: %d \n", num3, num4);

	return 0;
}