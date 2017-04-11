#include <stdio.h>

// #define STNUM(Y, S, P)	YSP
// #define STNUM(Y, S, P)	Y S P
#define STNUM(Y, S, P)	((Y)*100000 + (S)*1000 + (P))
// 단순 연결
// #define STNUM(Y, S, P)	Y ## S ## P

int main10(void)
{
	printf("학번: %d \n", STNUM(10, 65, 175));
	printf("학번: %d \n", STNUM(10, 65, 075));
//	printf("학번: %d \n", STNUM(10, 65, 75));	// 로 구성해야 한다.

	return 0;
}

/*
- 실행 결과
학번: 1065175
학번: 1065061
-> 1065075로 치환이 이뤄지지 않았다. 075가 8진수로 해석된 결과이다.

필요한 형태대로 단순 결함 : ## 연산자
#define STNUM(Y, S, P)	Y ## S ## P
*/