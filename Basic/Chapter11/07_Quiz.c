//CH11. 1차원배열

#include <stdio.h>

/*
문제1
길이가 5인 int형 배열을 선언해서 사용자로부터 5개의 정수를 입력받는다.
그리고 최대값, 최소값, 모든 수의 합을 구하라. 함수(최대,최소,합)를 정의하여 구현하시오.
*/

int MaxVs7_1(int a[])
{
	int max;
	max = a[0];

	for (int i = 0; i < 5; i++)
	{
		if (max < a[i])
		{
			max = a[i];
		}
	}

	return max;
}

int MinVs7_1(int a[])
{
	int min;
	min = a[0];

	for (int i = 0; i < 5; i++)
	{
		if (min > a[i])
		{
			min = a[i];
		}
	}

	return min;
}

int SumNum7_1(int a[])
{
	int sum = 0;

	for (int i = 0; i < 5; i++)
	{
		sum = sum + a[i];
	}
	
	return sum;
}

int main7_1(void)
{
	int a[5];
	int input, sum = 0, max, min;

	for (int i = 0; i < 5; i++)
	{
		printf("%d 번째 수 입력: ", i + 1);
		scanf("%d", &input);
		a[i] = input;
	}
		
	max = MaxVs7_1(a);
	min = MinVs7_1(a);
	sum = SumNum7_1(a);

	printf("최대: %d \n", max);
	printf("최소: %d \n", min);
	printf("합: %d \n", sum);

	return 0;

}

/*
문제2
char형 1차원 배열을 선언과 동시에 'Good time' 문장으로 초기화하고, 저장된 내용을 출력하라.
*/
int main7_2(void)
{
	int idx;
	char ch[50] = "Good time";

	printf("%s \n", ch);

	return 0;
}

/*
문제3
하나의 영단어를 입력받아서 길이를 계산하여 출력하라. morning라고 입력하면 7이 출력되야한다.
*/
int main7_3(void)
{
	int idx = 0;
	char str[] = "";

	printf("영단어를 입력하시오: ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	printf("길이: %d \n", idx);

	return 0;
}

/*
문제4
영단어를 char형 배열에 저장한다. 그 다음 영단어를 역순으로 뒤집는다.
그리고 입력했던 단어와 뒤집어진 단어를 출력한다.
*/
int main7_4(void)
{
	int idx = 0;
	char str[] = "";

	printf("영단어를 입력하시오: ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	printf("원문: ");
	for (int i = 0; i < idx; i++)
	{
		printf("%c", str[i]);
	}
	printf("\n역순: ");
	for (int i = idx - 1; i > -1; i--)
	{
		printf("%c", str[i]);
	}
	printf("\n");

	return 0;
}

/*
문제5
10자 이하인 영단어를 입력받아 아스키 코드값이 가장 큰 문자를 출력하라.
LOVE를 입력했다면 V가 출력되어야 한다.
*/
int MaxASCII7_5(char str[], int idx)
{
	int max;
	max = (int)str[0];

	for (int i = 0; i < idx; i++)
	{
		if (max < (int)str[i])
		{
			max = (int)str[i];
		}
	}

	return max;
}

int main7_5(void)
{
	int idx = 0;
	char str[] = "";
	int max;

	printf("영단어를 입력하시오(10자 이하): ");
	scanf("%s", str);

	while (str[idx] != '\0')
	{
		idx++;
	}

	max = MaxASCII7_5(str, idx);
	printf("문자 출력: %c \n", max);

	return 0;
}