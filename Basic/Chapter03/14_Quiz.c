//CH03.�����Ϳ�����

#include <stdio.h>

/*
���� 1 : 03-01
����ڷκ��� �ΰ��� ������ �Է¹޾Ƽ� ��Ģ���꿡 ���� ����� ����ϴ� ���α׷��� �ۼ��϶�.
*/
int main14_1(void)
{
	int sum, sub, mul;
	float div;
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = (float)num1 / num2;

	printf("%d + %d = %d \n", num1, num2, sum);
	printf("%d - %d = %d \n", num1, num2, sub);
	printf("%d * %d = %d \n", num1, num2, mul);
	printf("%d / %d = %f \n", num1, num2, div);

	return 0;

}


/*
���� 2 : 03-02
�ϳ��� ������ �Է¹޾Ƽ� �� ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
���� 5�� �Է¹޾Ҵٸ� 25�� ��µǾ�� �Ѵ�.
*/
int main14_2(void)
{
	int result;
	int num;

	printf("������ ���� �Է�: ");
	scanf("%d", &num);

	result = num * num;
	printf("%d�� ���� = %d \n", num, result);

	return 0;

}


/*
���� 3 : 03-03
�ΰ��� ������ �Է¹޾Ƽ� ������ ���� ��°���� ������.
��¿�) �ΰ��� ������ �Է��ϼ���.
25/
25 ������ 4 �� ���� 000 �Դϴ�.
25 ������ 4 �� �������� 000 �Դϴ�.
*/
int main14_3(void)
{
	int result1, result2;
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("%d ������ %d �� ���� %d �Դϴ�.\n", num1, num2, result1);
	printf("%d ������ %d �� �������� %d �Դϴ�.\n", num1, num2, result2);

	return 0;

}