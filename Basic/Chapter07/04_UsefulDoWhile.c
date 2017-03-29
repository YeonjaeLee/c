#include <stdio.h>

int main4(void)
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total = total + num;
	} while (num != 0);

	printf("합계: %d \n", total);

	return 0;

}