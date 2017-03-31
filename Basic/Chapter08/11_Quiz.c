//CH08. ���ǹ�

#include <stdio.h>

/*
���� 08-01
1�̻� 100�̸��� �����߿��� 7�ǹ���� 9�ǹ���� ����ϴ� ���α׷��� �ۼ��϶�.
��, 7�� ����̸鼭 ���ÿ� 9�� ����� ������ �ѹ��� ����ؾ� �Ѵ�.
*/
int main11_1(void)
{
	int i;

	for (i = 1; i < 100; i++)
	{
		if (i % 7 == 0 || i % 9 == 0)
		{
			printf("%d \n", i);
		}
	}

	return 0;

}

/*
���� 08-02
�ΰ��� ������ �Է� �޾Ƽ� �μ��� ���� ����ϴ� ���α׷��� �ۼ��϶�.
�� �Էµ� �� ���� ������ ������� ��°���� �׻� 0 �̻��̾�� �Ѵ�.
1��2�� �Է��ߴٸ� 1 .... 20��10�� �Է��ߴٸ� 10 ....
�� ���α׷��� if�� Ȥ�� ���ǿ����ڸ� �̿��Ͽ� �ۼ��غ���.
*/
int main11_2(void)
{
	int num1, num2;

	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("�� ���� ��: %d \n", num1 - num2);
	}
	else
	{
		printf("�� ���� ��: %d \n", num2 - num1);
	}

	return 0;

}

/*
���� 08-03
�л��� ��ü ��������� ���� ������ ����ϴ� ���α׷��� �ۼ��϶�.
����� ����, ����, ������ ������ ���ʷ� �Է¹��� �� ����� ���� ��
90���̻� A, 80���̻� B, 70���̻� C, 50���̻� D, �� �̸��̸� F�� ����Ѵ�.
*/
int main11_3(void)
{
	int kor, eng, math, total, aver;

	printf("���� ���� ���� ������ ���ʷ� �Է��Ͻÿ�: ");
	scanf("%d %d %d", &kor, &eng, &math);

	total = kor + eng + math;
	aver = total / 3;
	printf("�������: %d \n", aver);

	if (aver >= 90)
	{
		printf("����: A \n");
	}
	else if (aver >= 80)
	{
		printf("����: B \n");
	}
	else if (aver >= 70)
	{
		printf("����: C \n");
	}
	else if (aver >= 50)
	{
		printf("����: D \n");
	}
	else
	{
		printf("����: F \n");
	}

	return 0;

}

/*
���� 08-04
�������� ����ϵ� ¦���ܸ� ����ϵ��� ���α׷��� �ۼ��϶�.
��, 2���� 2*2������, 4���� 4*4������....8���� 8*8������ ����ؾ� �Ѵ�.
*/
int main11_4(void)
{
	int cur, is;

	for (cur = 2; cur< 10; cur++)
	{
		if (cur % 2 == 0)
		{
			for (is = 1; is < cur + 1; is++)
			{
				if (is % 2 == 0)
				{
					printf("%d x %d = %d \n", cur, is, cur * is);
				}
				else {}
			}
			printf("\n");
		}
		else {}
	}
	return 0;

}

/*
���� 08-05
����ڷκ��� 5���� ������ �Է¹޾Ƽ� ���� ���Ͽ� ����Ѵ�.
���� �Է¹޴� ���ڰ� 1�̸��� ���ڶ�� ���Է��� �䱸�ؾ� �Ѵ�. �׷��� 1�̻��� ���� 5���� �Է¹޾ƾ� ���α׷��� �ϼ��ȴ�.
*/
int main11_5(void)
{
	int total = 0, num = 0, count = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d��° ���� �Է�: ", i+1);
		scanf("%d", &num);
		if (num < 1)
		{
			printf("���Է��Ͻÿ�. \n");
			i--;
		}
		else
		{
			total = total + num;
		}
	}

	printf("�հ�: %d \n", total);

	return 0;

}

/*
���� 08-06
1���� 100���� �����߿��� ¦���� ���� ���϶�. �� do~while���� �̿��϶�
*/
int main11_6(void)
{
	int total = 0, num = 1;

	do
	{
		if (num % 2 == 0)
		{
			total = total + num;
			printf(" %d +", num);
		}
		else{}
		num++;
	} while (num < 101);

	printf("\b= %d \n", total);

	return 0;
}

/*
���� 08-07
����ڷκ��� 2���� ������ �Է¹޴´�. ���� 2�� 6�� �Է¹޾Ҵٸ�
2+3+4+5+6�� ���ϴ� ���α׷��� �ۼ��϶�.
�� 6�� 2�� �Է¹޴´ٸ� 6+5+4+3+2�� ���ؾ� �Ѵ�.
*/
int main11_7(void)
{
	int num1, num2;
	int total = 0;

	printf("�ΰ��� �ٸ� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

	if (num1 < num2)
	{
		for (int i = num1; i < num2 + 1; i++)
		{
			printf(" %d +", i);
			total = total + i;
		}
	}
	else
	{
		for (int i = num1; i > num2 - 1; i--)
		{
			printf(" %d +", i);
			total = total + i;
		}
	}
	printf("\b= %d \n", total);

	return 0;
}

/*
���� 08-08
���� ���� �����ϴ� ��� A�� Z�� ���ϴ� ���α׷��� �ۼ��϶�
AZ
+ZA
-----
99
��, A�� Z�� ���δٸ� �����̴�.
*/
int main11_8(void)
{
	int A, Z;

	printf("AZ + ZA = 99 �� �����ϴ� (A, Z): \n");
	for (int A = 1; A < 10; A++)
	{
		for (int Z = 1; Z < 10; Z++)
		{
			if (A + Z == 9)
			{
				if (A != Z)
				{
					printf("(%d, %d) \n", A, Z);
				}
				else{}
			}
			else{}
		}
	}

	return 0;
}