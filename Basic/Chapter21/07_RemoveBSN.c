#include <stdio.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main7(void)
{
	char str[100];
	printf("문자열 입력: ");
	fgets(str, sizeof(str), stdin);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("길이: %d, 내용: %s \n", strlen(str), str);

	return 0;
}

/*
- strlen : 문자열 길이 반환 함수

입력시 엔터 값까지 길이에 포함 됌
Good morning'\n''\0'
str[len - 1] = 0; 를 해줌으로써 NULL값 당겨와 엔터값 삭제

1.	정상 출력
문자열 입력: Good morning
길이: 13, 내용: Good morning

길이: 12, 내용: Good morning
*/