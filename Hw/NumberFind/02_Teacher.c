#include <stdio.h>

int IsNumber(char c)
{
	if (c >= 48 && c <= 57)
	{
		printf("����\n");
		return 1;
	}
	else {
		printf("����\n");
		return 0;
	}
}

int main2()
{
	char str[50];
	int nSum = 0;

	printf("�������������Է� : ");
	scanf("%s", str);

	printf("�Է� ���� ���ڿ� %s \n", str);

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

	printf("������ �� : %d \n", nSum);

	return 0;
}

