//CH09. 함수

#include <stdio.h>

/*
문제1
세 개의 정수를 인자로 전달 받아서 그중 가장 큰수와 가장 작은수를 반환하는 함수를 정의하라.
*/
int MaxVs14_1(int a, int b, int c)
{
	if (a > b)
	{
		if (a > c)
			return a;
		else
			return c;
	}
	else
	{
		if (b > c)
			return b;
		else
			return c;
	}
}

int MinVs14_1(int a, int b, int c)
{
	if (a < b)
	{
		if (a < c)
			return a;
		else
			return c;
	}
	else
	{
		if (b < c)
			return b;
		else
			return c;
	}
}

int main14_1(void)
{
	int a, b, c;

	printf("세 정수를 입력하세요: ");
	scanf("%d %d %d", &a, &b, &c);

	printf("가장 큰 수: %d, 가장 작은 수: %d \n", MaxVs14_1(a, b, c), MinVs14_1(a, b, c));

	return 0;

}


/*
문제2
섭씨(Celsius)를 입력받아서 화씨(Fahrenheit)로 변환하여 리턴하는 함수와
화씨를 입력받아서 섭씨로 변환하여 리턴하는 함수를 만들어라.
화씨 = 1.8 * 섭씨 + 32
섭씨 = (화씨 - 32) / 1.8
*/
void CtoF14_2(double c)
{
	double f;
	f = 1.8 * c + 32;

	printf("화씨온도: %f \n", f);
}

void FtoC14_2(double f)
{
	double c;
	c = (f - 32) / 1.8;

	printf("섭씨온도: %f \n", c);
}

int main14_2(void)
{
	int input;
	double c, f;

	printf("변환 선택 (1.섭씨->화씨, 2.화씨->섭씨): ");
	scanf("%d", &input);

	if (input == 1)
	{
		printf("변환 할 섭씨온도 입력: ");
		scanf("%lf", &c);

		CtoF14_2(c);
	}
	else if(input == 2)
	{
		printf("변환 할 화씨온도 입력: ");
		scanf("%lf", &f);

		FtoC14_2(f);
	}
	else
	{
		printf("잘못입력하셨습니다. \n");
	}
}