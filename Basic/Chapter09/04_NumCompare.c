#include <stdio.h>

int main4(void)
{
	printf("3�� 4�߿��� ū ���� %d �̴�. \n", NumberCompare4(3, 4));
	printf("7�� 2�߿��� ū ���� %d �̴�. \n", NumberCompare4(7, 2));

	return 0;
}

int NumberCompare4(int num1, int num2)
{
	if (num1 > num2)
	{
		return num1;
	}
	else
		return num2; 
}