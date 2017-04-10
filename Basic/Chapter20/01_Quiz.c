// CH20. 도전프로그래밍3

#include <stdio.h>

/*
문제1
길이가 4 by 4인 int형 배열을 선언하고 순서대로 1, 2, 3 … 정수를 입력하여 초기화하자.
그리고 배열의 요소들을 오른쪽 방향으로 90º씩 이동시켜서 그 결과를 출력하는 프로그램을 작성하라.

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

	printf("원문 배열 \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}

	printf("90º 이동 \n");
	for (int i = 0; i < 4; i++)
	{
		for (int j = 3; j > -1; j--)
		{
			printf("%d\t", arr[j][i]);
		}
		printf("\n\n");
	}

	printf("90º 이동 \n");
	for (int i = 3; i > -1; i--)
	{
		for (int j = 3; j > -1; j--)
		{
			printf("%d\t", arr[i][j]);
		}
		printf("\n\n");
	}

	printf("90º 이동 \n");
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
문제2
달팽이 배열을 만들어서 이를 출력하는 프로그램을 작성하고자 한다. 달팽이배열은 다음과 같다.
4 by 4 크기의 달팽이배열
1  2  3  4			1  2  3  4
5  6  7  8			12 13 14 5
9  10 11 12			11 16 15 6
13 14 15 16			10 9  8  7

00 01 02 03			00 01 02 03
10 11 12 13			23 30 31 10
20 21 22 23			22 33 32 11
30 31 32 33			21 20 13 12
사용자로부터 숫자 n을 입력받아서 n by n 길이에 해당하는 달팽이 배열을 출력해주는 프로그램을 작성하라.!!!
*/
int main1_2(void)
{
	int arr[20][20] = { 0 };
	int input, limit;
	int num = 1;
	int i = 0, j = -1, delta = 1;

	printf("생성할 배열의 크기를 입력하세요: ");
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

	printf("달팽이 배열 \n");
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