//CH12. ������

#include <stdio.h>

/*
����1
����� ����� �����غ���
*/
int main2_1(void)
{
	int num = 10;
	int * ptr1 = &num;
	int * ptr2 = ptr1;

	(*ptr1)++;
	(*ptr2)++;
	printf("%d \n", num);

	return 0;
}

///////////////////////////// ��� : 12

/*
����2
int�� ���� num1�� num2�� ����� ���ÿ� ���� 10�� 20���� �ʱ�ȭ�ϰ�,
int�� ������ ���� ptr1, ptr2 �� �����Ͽ� num1, num2�� ����Ű�� ����.
ptr1, ptr2�� �̿��ؼ� num1 10����, num2 10������ ���...
ptr1, ptr2�� ������Ű�� ����� ���� �ٲ��� 15������Ų��.
�׸��� ptr1, ptr2�� ����Ű�� ������ ����� ���� ��¡�
*/
int main2_2(void)
{
	int num1 = 10, num2 = 20;
	int * ptr1 = NULL;
	int * ptr2 = NULL;
	ptr1 = &num1;
	ptr2 = &num2;

	(*ptr1) = (*ptr1) + 10;
	(*ptr2) = (*ptr2) - 10;
	printf("num1: %d, num2: %d \n", num1, num2);

	ptr1 = &num2;
	ptr2 = &num1;

	(*ptr2) = (*ptr2) + 15;
	(*ptr1) = (*ptr1) + 15;
	printf("ptr1: %d, ptr2: %d \n", *ptr1, *ptr2);

	return 0;
}