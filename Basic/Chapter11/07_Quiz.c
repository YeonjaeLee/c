//CH11. 1�����迭

#include <stdio.h>

/*
����1
���̰� 5�� int�� �迭�� �����ؼ� ����ڷκ��� 5���� ������ �Է¹޴´�.
�׸��� �ִ밪, �ּҰ�, ��� ���� ���� ���϶�. �Լ�(�ִ�,�ּ�,��)�� �����Ͽ� �����Ͻÿ�.
*/

int MaxVs7_1(int a[])
{
	int max;
	max = a[0];

	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}

int MinVs7_1(int a[])
{
	int min;
	min = a[0];

	for (int i = 0; i < 5; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}

int SumNum7_1(int a[])
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	
	return sum;
}

int main7_1(void)
{
	int a[5];
	int input, sum = 0, max, min;

	for (int i = 0; i < 5; i++)
	{
		printf("%d ��° �� �Է�: ", i + 1);
		scanf("%d", &input);
		a[i] = input;
	}
		
	max = MaxVs7_1(a);
	min = MinVs7_1(a);
	sum = SumNum7_1(a);

	printf("�ִ�: %d \n", max);
	printf("�ּ�: %d \n", min);
	printf("��: %d \n", sum);

	return 0;

}

/*
����2
char�� 1���� �迭�� ����� ���ÿ� 'Good time' �������� �ʱ�ȭ�ϰ�, ����� ������ ����϶�.
*/
int main7_2(void)
{
	int idx;
	char ch[50] = "Good time";

	printf("%s \n", ch);

	return 0;
}

/*
����3
�ϳ��� ���ܾ �Է¹޾Ƽ� ���̸� ����Ͽ� ����϶�. morning��� �Է��ϸ� 7�� ��µǾ��Ѵ�.
*/
int main7_3(void)
{
	int idx = 0;
	char str[] = "";

	printf("���ܾ �Է��Ͻÿ�: ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	printf("����: %d \n", idx);

	return 0;
}

/*
����4
���ܾ char�� �迭�� �����Ѵ�. �� ���� ���ܾ �������� �����´�.
�׸��� �Է��ߴ� �ܾ�� �������� �ܾ ����Ѵ�.
*/
int main7_4(void)
{
	int idx = 0;
	char str[] = "";

	printf("���ܾ �Է��Ͻÿ�: ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	printf("����: ");
	for (int i = 0; i < idx; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n����: ");
	for (int i = idx - 1; i > -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}

/*
����5
10�� ������ ���ܾ �Է¹޾� �ƽ�Ű �ڵ尪�� ���� ū ���ڸ� ����϶�.
LOVE�� �Է��ߴٸ� V�� ��µǾ�� �Ѵ�.
*/
int MaxASCII7_5(char str[], int idx)
{
	int max;
	max = (int)str[0];

	for (int i = 0; i < idx; i++)
	{
		if (max < (int)str[i])
		{
			max = (int)str[i];
		}
	}

	return max;
}

int main7_5(void)
{
	int idx = 0;
	char str[] = "";
	int max;

	printf("���ܾ �Է��Ͻÿ�(10�� ����): ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	max = MaxASCII7_5(str, idx);
	printf("���� ���: %c \n", max);

	return 0;
}