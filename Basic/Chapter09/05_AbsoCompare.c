#include <stdio.h>

int AbsoCompare5(int num1, int num2);
int GetAbsovalue5(int num);

int main5(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	printf("%d�� %d�� ������ ū ����: %d \n", num1, num2, AbsoCompare5(num1, num2));

	return 0;
}

int AbsoCompare5(int num1, int num2)
{
	if (GetAbsovalue5(num1) > GetAbsovalue5(num2))
		return num1;
	else
		return num2;
}

int GetAbsovalue5(int num)
{
	if (num < 0)
		return num * (-1);
	else
		return num;
}