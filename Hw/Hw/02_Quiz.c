#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

/*
������ ���ڸ� ���� ǥ���մϴ�.
�� 100�� �ڸ��� ���� 10�� �ڸ��� �� 1�� �ڸ��� ���� ���Ƽ��� �ȵ˴ϴ�.

Ex )
101 �� �ȵ� : 1�� �ΰ���
777 �� �ȵ� : 7�� ������
224 �� �ȵ� : 2�� �ΰ���
233 �� �ȵ� : 3�� �ΰ���
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