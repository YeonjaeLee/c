// CH16.�������迭

#include <stdio.h>

/*
����1
���ΰ� 9, ���ΰ� 3�� int�� 2���� �迭�� �����Ͽ� ������ �� 2, 3, 4���� �����Ѵ�.
�׸��� ����� ������ �Ǿ����� Ȯ���ϱ� ���� ����� �ϴ� ���α׷��� �ۼ��϶�
*/
int main7_1(void)
{
	int i, j;
	int gugu[3][9] = { 0 };

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			gugu[i][j] = (i + 2) * (j + 1);
		}
		printf("\n");
	}

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 9; j++)
		{
			printf("%d\t", gugu[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
����2
�켱 �Ʒ��� ���� ������ �����迭 A�� �����Ѵ�. �׸��� A�迭�� �ʱⰪ�� �̿��ؼ� �����迭 B�� �ʱ�ȭ�ϴ� ���α׷��� �ۼ��Ͻÿ�.
int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
int arr2[4][2];
*/
int main7_2(void)
{
	int i, j;
	int arr1[2][4] = { 1,2,3,4,5,6,7,8 };
	int arr2[4][2] = { 0 };

	printf("arr1: \n");

	for (i = 0; i < 2; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr1[i][j]);
		}
		printf("\n");
	}

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			arr2[i][j] = arr1[j][i];
		}
	}

	printf("\narr2: \n");
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 2; j++)
		{
			printf("%d ", arr2[i][j]);
		}
		printf("\n");
	}
	return 0;
}

/*
����3
�������� ���α׷��� �ۼ��Ѵ�.
����, ����, ����, ����f 4�����̰� �л��� �̼���, ������, ��������, ���� 4���̴�.
4 by 4 �迭��  �����ϰ� ����ڷκ��� 4����� 4���� ������ �Է¹޾� ������ ���·� ���� �����ϰ�
������ ���ϴ� ���α׷��� �ۼ��϶�.
*/
int main(void)
{
	int score[4][4] = { 0 };
	char name[4];
	int namearr[4] = { 0 };
	int stcount = 0;

	while (1)
	{
		printf("�л� �̸� �Է�: ");
		scanf("%s", name);
	}

}













//int main(void)
//{
//	int idx = 0;
//	int arr[4][4] = { 0 };
//	int st[2][5] = { { "�̼���", "������", "��������", "����", "����"},{"����","����","����","����", "����"} };
//	int stcount = 0;
//	char stname[] = "";
//	int sum1 = 0, sum2 = 0, sum[5] = { 0 };
//
//	for (stcount = 0; stcount < 4; stcount++)
//	{
//		printf("%s�� �����Է�(����, ����, ����, ����): ", st[0][stcount]);
//		for (int i = 0; i < 4; i++)
//		{
//			scanf("%d", &arr[i][stcount]);
//		}
//		printf("\n");
//	}
//
//	printf("���: \n");
//	printf("����\t");
//	for (int i = 0; i < 5; i++)
//	{
//		printf("%7s\t", st[0][i]);
//	}
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%5s\t", st[1][i]);
//		for (int stcount = 0; stcount < 4; stcount++)
//		{
//			sum1 = sum1 + arr[i][stcount];
//			sum2 = sum2 + arr[stcount][i];
//			sum[i] = sum2;
//			printf("%8d\t", arr[i][stcount]);
//		}
//		printf("%d\n", sum1);
//		sum[4] = sum[4] + sum1;
//		sum1 = 0;
//		sum2 = 0;
//	}
//	printf("����\t");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%8d\t", sum[i]);
//	}
//	printf("%d\n",sum[4]);
//
//	return 0;
//
//}