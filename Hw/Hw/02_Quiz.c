#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

/*
랜덤한 세자리 수를 표시합니다.
단 100의 자리와 수와 10의 자리의 수 1의 자리의 수는 같아서는 안됩니다.

Ex )
101 등 안됨 : 1이 두개임
777 등 안됨 : 7이 세개임
224 등 안됨 : 2가 두개임
233 등 안됨 : 3이 두개임
*/

int main2()
{
	int num1, num2, num3;

	srand((int)time(NULL));

	num1 = rand() % 9 + 1;

	do
	{
		num2 = rand() % 10;
	} while (num1 == num2);

	do
	{
		do
		{
			num3 = rand() % 10;
		} while (num3 == num1);

	} while (num3 == num2);

	printf("%d%d%d \n", num1, num2, num3);

	return 0;
}