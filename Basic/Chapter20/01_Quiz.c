// CH20. �������α׷���3

#include <stdio.h>

/*
����1
���̰� 4 by 4�� int�� �迭�� �����ϰ� ������� 1, 2, 3 �� ������ �Է��Ͽ� �ʱ�ȭ����.
�׸��� �迭�� ��ҵ��� ������ �������� 90���� �̵����Ѽ� �� ����� ����ϴ� ���α׷��� �ۼ��϶�.

00 01 02 03		30 20 10 00		33 32 31 30		03 13 23 33
10 11 12 13		31 21 11 01		23 22 21 20		02 12 22 32
20 21 22 23		32 22 12 02		13 12 11 10		01 11 21 31
30 31 32 33		33 23 13 03		03 02 01 00		00 10 20 30

*/

int main1_1(void)
{
	int arr[4][4] = { 0 };
	int num = 1;
	
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			arr[i][j] = num++;
		}
	}

	printf("���� �迭 \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}

	printf("90�� �̵� \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j > -1; j--)
		{
			printf("%d\t", arr[j][i]);
		}
		printf("\n\n");
	}

	printf("90�� �̵� \n");
	for (int i = 3; i > -1; i--)
	{
		for (int j = 3; j > -1; j--)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}

	printf("90�� �̵� \n");
	for (int i = 3; i > -1; i--)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", arr[j][i]);
		}
		printf("\n\n");
	}

	return 0;
}

/*
����2
������ �迭�� ���� �̸� ����ϴ� ���α׷��� �ۼ��ϰ��� �Ѵ�. �����̹迭�� ������ ����.
4 by 4 ũ���� �����̹迭
1  2  3  4			1  2  3  4
5  6  7  8			12 13 14 5
9  10 11 12			11 16 15 6
13 14 15 16			10 9  8  7

00 01 02 03			00 01 02 03
10 11 12 13			23 30 31 10
20 21 22 23			22 33 32 11
30 31 32 33			21 20 13 12
����ڷκ��� ���� n�� �Է¹޾Ƽ� n by n ���̿� �ش��ϴ� ������ �迭�� ������ִ� ���α׷��� �ۼ��϶�.!!!
*/
int main1_2(void)
{
	int arr[20][20] = { 0 };
	int input, limit;
	int num = 1;
	int i = 0, j = -1, delta = 1;

	printf("������ �迭�� ũ�⸦ �Է��ϼ���: ");
	scanf("%d", &input);
	limit = input;

	while (1) {
		for (int z = 0; z < limit; z++)
		{
			j = j + delta;
			arr[i][j] = num;
			num++;
		}
		limit--;

		if (limit < 0)
			break;
		
		for (int z = 0; z < limit; z++)
		{
			i = i + delta;
			arr[i][j] = num;
			num++;
		}
		delta = -delta;
	}

	printf("������ �迭 \n");
	for (int i = 0; i < input; i++)
	{
		for (int j = 0; j < input; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}

	return 0;
}