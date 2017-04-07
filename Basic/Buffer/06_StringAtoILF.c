#include <stdio.h>
#include <stdlib.h>

int main6(void)
{
	char str[20];
	printf("정수 입력: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("실수 입력: ");
	scanf("%s", str);
	printf("%g \n", atof(str));

	return 0;
}

/*
#include <stdlib.h> 선언 필요

- atoi(* str) : 문자열 int형 변환
- atol(* str) : 문자열 long형 변환
- atof(* str) : 문자열 double형 변환

1. 정상 출력
정수 입력: 15
15
실수 입력: 12.456
12.456
*/