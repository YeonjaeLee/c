#include <stdio.h>

int main1(void)
{
	int num1 = 100, num2 = 100;
	int * pnum;

	pnum = &num1;
	(*pnum) = (*pnum) + 30;

	pnum = &num2;
	(*pnum) = (*pnum) - 30;

	printf("num1: %d, num2: %d \n", num1, num2);

	////////////////////////////////////////////////

	double * pnum2 = &num1;
	printf("num1: %d \n", *pnum2);

	// num3 ���� 0���� ���. �ڷ����� ���� �ʾ� ����ȯ ����
	double num3 = 5;
	int * pnum3 = &num3;
	printf("num3: %d \n", *pnum3);

	double num4 = 5;
	double * pnum4 = &num4;
	printf("num4: %lf \n", *pnum4);

	printf("int�� �����ͺ��� ũ�� : %d \n", sizeof(pnum3));
	printf("double�� �����ͺ��� ũ�� : %d \n", sizeof(pnum2));

	return 0;
}