//CH07.�ݺ���

#include <stdio.h>

/*
���� 1 : 07-01
����ڷκ��� ����ؼ� ������ �Է¹޴´�.
�� 0�� �Է¹ްԵǸ� ������ �Է¹��� ��� ������ ������ ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
*/
int main8_1(void)
{
	int total = 0, num = 0;

	do
	{
		printf("���� �Է�(0 to quit): ");
		scanf("%d", &num);
		total = total + num;
	} while (num != 0);

	printf("�հ�: %d \n", total);

	return 0;

}

/*
���� 07-02
����ڷκ��� ���� ������� ������ �Է¹��� �� ����� ���Ͽ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
1.��� ������ �Է��� �� ����ڷκ��� �Է¹޴´�.
2.�Է¹��� ���ڸ�ŭ ������ �Է¹޴´�.(1���� 3�̶�� �Է��ߴٸ� 3���� ������ �Է¹޾ƾ� �Ѵ�)
3.�Է¹��� ���ڵ��� ��հ��� ���Ͽ� ����Ѵ�. ��հ��� �Ҽ��� ���ϱ��� ����ؾ� �Ѵ�.
*/
int main8_2(void)
{
	int i, num = 0;
	double input = 0.0, total = 0.0;

	printf("�Է��� ������ �� �Է�: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("�Ǽ� �Է�(minus to quit) : ");
		scanf("%lf", &input);
		total = total + input;
	}
	printf("���: %f \n", total / num);

	return 0;

}

/*
���� 07-03
����ڷκ��� ���� �ϳ��� �Է¹��� �� �� ���� �ش��ϴ� �������� �������� ����Ͻÿ�.
*/
int main8_3(void)
{
	int dan = 0, num = 9;

	printf("�� ��? ");
	scanf("%d", &dan);

	while (num > 0)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num--;
	}

	return 0;

}

/*
���� 07-04
���� �ϳ��� �Է¹����� �� ����
���丮�� �Լ��� ����� ����ϴ� ���α׷��� while���� �̿��Ͽ� �����Ͻÿ�.
��¿�) �Է����� : 5
5*4*3*2*1 = 120
*/
int main8_4(void)
{
	int num = 0, total = 1;

	printf("�Է�����: ");
	scanf("%d", &num);

	while (num > 0)
	{
		total = total * num;
		printf(" %d *", num);
		num--;
		/*if (num != 0)
		{
			printf("* ");
		}*/
	}
	printf("\b= %d \n", total);

	return 0;

}

/*
���� 07-05
Do~While���� �̿��Ͽ� 1~1000���� ���ؼ� ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�������� �Ʒ��Ͱ��� ����Ͻÿ�.
��)1+2+3.......+1000 = 500500
*/
int main8_5(void)
{
	int total = 0, num = 1;

	do
	{
		printf(" %d +", num);
		total = total + num;
		//if (num != 1000)
		//{
		//	printf("+ ");
		//}
		num++;
	} while (num != 1001);

	printf("\b= %d \n", total);

	return 0;

}

/*
���� 07-06
��ø for���� �̿��Ͽ� ������ ��ü�� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
�� ������, ������ �Ѵ� �����\����.
*/
int main8_6(void)
{
	int cur, is;

	printf("���� \n");

	for (is = 1; is < 10; is++)
	{
		for (cur = 2; cur < 10; cur++)
		{
			printf("%dx%d=%d \t", cur, is, cur * is);
		}
		printf("\n");
	}

	printf("\n���� \n");

	for (cur = 2; cur< 10; cur++)
	{
		for (is = 1; is < 10; is++)
		{
			printf("%dx%d=%d \t", cur, is, cur * is);
		}
		printf("\n");
	}

	return 0;

}