//CH03.변수와연산자

#include <stdio.h>

/*
문제 1 : 03-01
사용자로부터 두개의 정수를 입력받아서 사칙연산에 대한 결과를 출력하는 프로그램을 작성하라.
*/
int main14_1(void)
{
	int sum, sub, mul;
	float div;
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	sum = num1 + num2;
	sub = num1 - num2;
	mul = num1 * num2;
	div = (float)num1 / num2;

	printf("%d + %d = %d \n", num1, num2, sum);
	printf("%d - %d = %d \n", num1, num2, sub);
	printf("%d * %d = %d \n", num1, num2, mul);
	printf("%d / %d = %f \n", num1, num2, div);

	return 0;

}


/*
문제 2 : 03-02
하나의 정수를 입력받아서 그 수의 제곱을 출력하는 프로그램을 작성하라.
가령 5를 입력받았다면 25가 출력되어야 한다.
*/
int main14_2(void)
{
	int result;
	int num;

	printf("제곱할 정수 입력: ");
	scanf("%d", &num);

	result = num * num;
	printf("%d의 제곱 = %d \n", num, result);

	return 0;

}


/*
문제 3 : 03-03
두개의 정수를 입력받아서 다음과 같은 출력결과를 만들어보자.
출력예) 두개의 정수를 입력하세요.
25/
25 나누기 4 의 몫은 000 입니다.
25 나누기 4 의 나머지는 000 입니다.
*/
int main14_3(void)
{
	int result1, result2;
	int num1, num2;

	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

	result1 = num1 / num2;
	result2 = num1 % num2;

	printf("%d 나누기 %d 의 몫은 %d 입니다.\n", num1, num2, result1);
	printf("%d 나누기 %d 의 나머지는 %d 입니다.\n", num1, num2, result2);

	return 0;

}