#include <stdio.h>

int main10(void)
{
	char str1[20];
	char str2[20];

	printf("문자열 입력 1: ");
	scanf("%s", str1);

	printf("문자열 입력 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("두 문자열은 완벽히 동일합니다.");
	}
	else
	{
		puts("두 문자열은 동일하지 않습니다.");

		if (!strncmp(str1, str2, 3))
		{
			puts("그러나 앞 세 글자는 동일합니다.");
		}
	}
	return 0;
}

/*
- strcmp(str1, str2) : str1와 str2를 비교
					   str1이 더 크면 0보다 큰 값 반환
					   str2이 더 크면 0보다 작은 값 반환
					   str1과 str2 같으면 0 반환
- strncmp(str1, str2, size) : str1와 str2를 size만큼 비교

1. 정상 출력
문자열 입력 1: Simple
문자열 입력 2: Simon
두 문자열은 동일하지 않습니다.
그러나 앞 세 글자는 동일합니다.
*/