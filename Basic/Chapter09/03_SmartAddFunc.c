#include <stdio.h>

int Add3(int num1, int num2)
{
	return num1 + num2;
}

void ShowAddResult3(int num)
{
	printf("������� ���: %d \n", num);
}

int ReadNum3(void)
{
	int num;
	scanf("%d", &num);
	return num;
}

void HowToUseThisProg3(void)
{
	printf("�� ���� ������ �Է��Ͻø� ��������� ��µ˴ϴ�. \n");
	printf("��! �׷� �� ���� ������ �Է��ϼ���. \n");
}

int main3(void)
{
	int result, num1, num2;
	HowToUseThisProg3();
	num1 = ReadNum3();
	num2 = ReadNum3();

	result = Add3(num1, num2);
	ShowAddResult3(result);	

	return 0;
}