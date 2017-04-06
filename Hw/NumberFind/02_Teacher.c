#include <stdio.h>

int IsNumber(char c)
{
	if (c >= 48 && c <= 57)
	{
		printf("숫자\n");
		return 1;
	}
	else {
		printf("문자\n");
		return 0;
	}
}

int main2()
{
	char str[50];
	int nSum = 0;

	printf("정수형데이터입력 : ");
	scanf("%s", str);

	printf("입력 받은 문자열 %s \n", str);

	for (int i = 0; i < 50; i++)
	{
		if (str[i] == '\0')
		{
			break;
		}

		if (IsNumber(str[i]))
		{
			int num = str[i] - 48;
			nSum = nSum + num;
		}
	}

	printf("숫자의 합 : %d \n", nSum);

	return 0;
}

