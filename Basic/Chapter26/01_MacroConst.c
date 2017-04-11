#define NAME	"홍길동"
#define AGE		24
#define PRINT_ADDR	puts("주소: 경기도 용인시\n");

#include <stdio.h>

int main1(void)
{
	printf("이름: %s \n", NAME);
	printf("나이: %d \n", AGE);
	PRINT_ADDR;

	return 0;
}

/*
- 실행 화면
이름: 홍길동
나이: 24
주소: 경기도 용인시
*/