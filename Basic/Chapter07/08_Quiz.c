//CH07.반복문

#include <stdio.h>

/*
문제 1 : 07-01
사용자로부터 계속해서 정수를 입력받는다.
단 0을 입력받게되면 기존에 입력받은 모든 정수를 더한후 결과를 출력하는 프로그램을 작성하시오.
*/
int main8_1(void)
{
	int total = 0, num = 0;

	do
	{
		printf("정수 입력(0 to quit): ");
		scanf("%d", &num);
		total = total + num;
	} while (num != 0);

	printf("합계: %d \n", total);

	return 0;

}

/*
문제 07-02
사용자로부터 다음 순서대로 정수를 입력받은 후 평균을 구하여 출력하는 프로그램을 작성하시오.
1.몇개의 정수를 입력할 지 사용자로부터 입력받는다.
2.입력받은 숫자만큼 정수를 입력받는다.(1에서 3이라고 입력했다면 3개의 정수를 입력받아야 한다)
3.입력받은 숫자들의 평균값을 구하여 출력한다. 평균값은 소수점 이하까지 계산해야 한다.
*/
int main8_2(void)
{
	int i, num = 0;
	double input = 0.0, total = 0.0;

	printf("입력할 정수의 수 입력: ");
	scanf("%d", &num);

	for (i = 0; i < num; i++)
	{
		printf("실수 입력(minus to quit) : ");
		scanf("%lf", &input);
		total = total + input;
	}
	printf("평균: %f \n", total / num);

	return 0;

}

/*
문제 07-03
사용자로부터 정수 하나를 입력받은 후 그 수에 해당하는 구구단을 역순으로 출력하시오.
*/
int main8_3(void)
{
	int dan = 0, num = 9;

	printf("몇 단? ");
	scanf("%d", &dan);

	while (num > 0)
	{
		printf("%d x %d = %d \n", dan, num, dan * num);
		num--;
	}

	return 0;

}

/*
문제 07-04
정수 하나를 입력받은후 그 수의
팩토리얼 함수의 결과를 출력하는 프로그램을 while문을 이용하여 구현하시오.
출력예) 입력정수 : 5
5*4*3*2*1 = 120
*/
int main8_4(void)
{
	int num = 0, total = 1;

	printf("입력정수: ");
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
문제 07-05
Do~While문을 이용하여 1~1000까지 더해서 결과를 출력하는 프로그램을 작성하시오.
실행결과도 아래와같이 출력하시오.
예)1+2+3.......+1000 = 500500
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
문제 07-06
중첩 for문을 이용하여 구구단 전체를 출력하는 프로그램을 작성하시오.
단 가로형, 세로형 둘다 만들어\야함.
*/
int main8_6(void)
{
	int cur, is;

	printf("가로 \n");

	for (is = 1; is < 10; is++)
	{
		for (cur = 2; cur < 10; cur++)
		{
			printf("%dx%d=%d \t", cur, is, cur * is);
		}
		printf("\n");
	}

	printf("\n세로 \n");

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