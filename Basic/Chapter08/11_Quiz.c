//CH08. 조건문

#include <stdio.h>

/*
문제 08-01
1이상 100미만의 정수중에서 7의배수와 9의배수를 출력하는 프로그램을 작성하라.
단, 7의 배수이면서 동시에 9의 배수인 정수는 한번만 출력해야 한다.
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
문제 08-02
두개의 정수를 입력 받아서 두수의 차를 출력하는 프로그램을 작성하라.
단 입력된 두 수의 순서에 상관없이 출력결과는 항상 0 이상이어야 한다.
1과2를 입력했다면 1 .... 20과10을 입력했다면 10 ....
위 프로그램을 if문 혹은 조건연산자를 이용하여 작성해보자.
*/
int main11_2(void)
{
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	if (num1 > num2)
	{
		printf("두 수의 차: %d \n", num1 - num2);
	}
	else
	{
		printf("두 수의 차: %d \n", num2 - num1);
	}

	return 0;

}

/*
문제 08-03
학생의 전체 평균점수에 대한 학점을 출력하는 프로그램을 작성하라.
실행시 국어, 영어, 수학의 점수를 차례로 입력받은 후 평균을 구한 후
90점이상 A, 80점이상 B, 70점이상 C, 50점이상 D, 그 미만이면 F를 출력한다.
*/
int main11_3(void)
{
	int kor, eng, math, total, aver;

	printf("국어 영어 수학 점수를 차례로 입력하시오: ");
	scanf("%d %d %d", &kor, &eng, &math);

	total = kor + eng + math;
	aver = total / 3;
	printf("평균점수: %d \n", aver);

	if (aver >= 90)
	{
		printf("학점: A \n");
	}
	else if (aver >= 80)
	{
		printf("학점: B \n");
	}
	else if (aver >= 70)
	{
		printf("학점: C \n");
	}
	else if (aver >= 50)
	{
		printf("학점: D \n");
	}
	else
	{
		printf("학점: F \n");
	}

	return 0;

}

/*
문제 08-04
구구단을 출력하되 짝수단만 출력하도록 프로그램을 작성하라.
단, 2단은 2*2까지만, 4단은 4*4까지만....8단은 8*8까지만 출력해야 한다.
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
문제 08-05
사용자로부터 5개의 정수를 입력받아서 합을 구하여 출력한다.
만약 입력받는 숫자가 1미만의 숫자라면 재입력을 요구해야 한다. 그래서 1이상의 정수 5개를 입력받아야 프로그램이 완성된다.
*/
int main11_5(void)
{
	int total = 0, num = 0, count = 0;

	for (int i = 0; i < 5; i++)
	{
		printf("%d번째 정수 입력: ", i+1);
		scanf("%d", &num);
		if (num < 1)
		{
			printf("재입력하시오. \n");
			i--;
		}
		else
		{
			total = total + num;
		}
	}

	printf("합계: %d \n", total);

	return 0;

}

/*
문제 08-06
1부터 100까지 정수중에서 짝수의 합을 구하라. 단 do~while문을 이용하라
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
문제 08-07
사용자로부터 2개의 정수를 입력받는다. 가령 2와 6을 입력받았다면
2+3+4+5+6을 구하는 프로그램을 작성하라.
단 6과 2를 입력받는다면 6+5+4+3+2를 구해야 한다.
*/
int main11_7(void)
{
	int num1, num2;
	int total = 0;

	printf("두개의 다른 정수 입력: ");
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
문제 08-08
다음 식을 만족하는 모든 A와 Z를 구하는 프로그램을 작성하라
AZ
+ZA
-----
99
단, A와 Z는 서로다른 숫자이다.
*/
int main11_8(void)
{
	int A, Z;

	printf("AZ + ZA = 99 를 만족하는 (A, Z): \n");
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