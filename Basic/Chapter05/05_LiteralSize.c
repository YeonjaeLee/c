#include <stdio.h>

int main5(void)
{
	printf("literal int size: %d \n", sizeof(7));
	printf("literal double size: %d \n", sizeof(7.14));
	printf("literal char size: %d \n", sizeof('A'));

	return 0;

}

// 리터럴 상수도 자료형이 결정되어야 메모리 공간에 저장이 될 수 있다.
// 정수는 기본적으로 int형으로 표현된다.
// 실수는 기본적으로 double형으로 표현된다.
// 문자는 기본적으로 int형으로 표현된다.