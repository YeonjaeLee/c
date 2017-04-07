// CH16.다차원배열

#include <stdio.h>

/*
문제1
가로가 9, 세로가 3인 int형 2차원 배열을 선언하여 구구단 중 2, 3, 4단을 저장한다.
그리고 제대로 저장이 되었는지 확인하기 위해 출력을 하는 프로그램을 작성하라
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
문제2
우선 아래와 같은 형태의 좌측배열 A를 선언한다. 그리고 A배열의 초기값을 이용해서 우측배열 B를 초기화하는 프로그램을 작성하시오.
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
문제3
성적관리 프로그램을 작성한다.
국어, 영어, 수학, 국사f 4과목이고 학생은 이순신, 강감찬, 을지문덕, 권율 4명이다.
4 by 4 배열을  선언하고 사용자로부터 4사람의 4과목 점수를 입력받아 다음의 형태로 값을 저장하고
총점을 구하는 프로그램을 작성하라.
*/
int main(void)
{
	int score[4][4] = { 0 };
	char name[4];
	int namearr[4] = { 0 };
	int stcount = 0;

	while (1)
	{
		printf("학생 이름 입력: ");
		scanf("%s", name);
	}

}













//int main(void)
//{
//	int idx = 0;
//	int arr[4][4] = { 0 };
//	int st[2][5] = { { "이순신", "강감찬", "을지문덕", "권율", "총점"},{"국어","영어","수학","국사", "총점"} };
//	int stcount = 0;
//	char stname[] = "";
//	int sum1 = 0, sum2 = 0, sum[5] = { 0 };
//
//	for (stcount = 0; stcount < 4; stcount++)
//	{
//		printf("%s의 성적입력(국어, 영어, 수학, 국사): ", st[0][stcount]);
//		for (int i = 0; i < 4; i++)
//		{
//			scanf("%d", &arr[i][stcount]);
//		}
//		printf("\n");
//	}
//
//	printf("출력: \n");
//	printf("구분\t");
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
//	printf("총점\t");
//	for (int i = 0; i < 4; i++)
//	{
//		printf("%8d\t", sum[i]);
//	}
//	printf("%d\n",sum[4]);
//
//	return 0;
//
//}