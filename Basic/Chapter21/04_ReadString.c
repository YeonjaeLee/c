#include <stdio.h>

int main4(void)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}

/*
문자열 입력 받아 원하는 길이 만큼 끊어 읽기
1.	fgets 최대 6 문자 출력
	12345678901234567890
	Read 1: 123456
	Read 2: 789012
	Read 3: 345678
2.	엔터 키의 입력도 문자열의 일부로 받아 들임
	We 엔터
	Read 1: We

	like 엔터
	Read 2: like

	you 엔터
	Read 3: you
3.	공백을 포함하는 문자열을 읽어 들임
	Y & I 엔터
	Read 1: Y & I

	ha ha 엔터
	Read 2: ha ha

	^^ -- 엔터
	Read 3: ^^ --
*/