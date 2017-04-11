#include <stdio.h>

// 비정상
#define SQUARE(X)	X * X
//정상
//#define SQUARE(X)	((X) * (X))

int main2(void)
{
	int num = 20;

	/* 정상적 결과 출력 */
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));

	/* 비정상적 결과 출력 */
	printf("Square of 3+2: %d \n", SQUARE(3+2));

	return 0;
}

/*
- 출력 결과
Square of num: 400
Square of -5: 25
Square of 2.5: 6.25
Square of 3+2: 11

- 왜 비정상적?
#define SQUARE(X)	X * X
SQUARE(3+2) -> 3 + 2 * 3 + 2 = 11	오류!
SQUARE((3+2)) -> (3 + 2) * (3 + 2) = 25	사용하기 불편

#define SQUARE(X)	(X) * (X)
SQUARE(3+2) -> (3 + 2) * (3 + 2) = 25	이 경우는 해결
num=120/SQUARE(2) -> 120 / (2) * (2)	여전히 문제

#define SQUARE(X)	((X) * (X))
num=120/SQUARE(2) -> 120 / ((2) * (2))	최상의 해결책!
*/