#include <stdio.h>

int main2(void)
{
	int i;
	float num = 0.0;

	for (i = 0; i < 100; i++)
		num = num + 0.1;

	printf("0.1�� 100�� ���� ���: %f \n", num);

	return 0;

}