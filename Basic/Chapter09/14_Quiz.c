//CH09. �Լ�

#include <stdio.h>

/*
����1
�� ���� ������ ���ڷ� ���� �޾Ƽ� ���� ���� ū���� ���� �������� ��ȯ�ϴ� �Լ��� �����϶�.
*/
int MaxVs14_1(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
}

int MinVs14_1(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main14_1(void)
{
	int a, b, c;

	printf("�� ������ �Է��ϼ���: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("���� ū ��: %d, ���� ���� ��: %d \n", MaxVs14_1(a, b, c), MinVs14_1(a, b, c));

	return 0;

}


/*
����2
����(Celsius)�� �Է¹޾Ƽ� ȭ��(Fahrenheit)�� ��ȯ�Ͽ� �����ϴ� �Լ���
ȭ���� �Է¹޾Ƽ� ������ ��ȯ�Ͽ� �����ϴ� �Լ��� ������.
ȭ�� = 1.8 * ���� + 32
���� = (ȭ�� - 32) / 1.8
*/
void CtoF14_2(double c)
{
	double f;
	f = 1.8 * c + 32;

	printf("ȭ���µ�: %f \n", f);
}

void FtoC14_2(double f)
{
	double c;
	c = (f - 32) / 1.8;

	printf("�����µ�: %f \n", c);
}

int main14_2(void)
{
	int input;
	double c, f;

	printf("��ȯ ���� (1.����->ȭ��, 2.ȭ��->����): ");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("��ȯ �� �����µ� �Է�: ");
		scanf("%lf", &c);

		CtoF14_2(c);
	}
	else if(input == 2)
	{
		printf("��ȯ �� ȭ���µ� �Է�: ");
		scanf("%lf", &f);

		FtoC14_2(f);
	}
	else
	{
		printf("�߸��Է��ϼ̽��ϴ�. \n");
	}
}