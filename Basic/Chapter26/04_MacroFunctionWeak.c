#include <stdio.h>

//잘못 정의된 매크로 (대소문자 구별)
//#define DIFF_ABS(X, Y)	((x)>(y) ? (x)-(y) : (y)-(x))
//올바른 정의
#define DIFF_ABS(x, y)	((x)>(y) ? (x)-(y) : (y)-(x))

int main4(void)
{
	printf("두 값의 차: %d \n", DIFF_ABS(5, 7));
	printf("두 값의 차: %g \n", DIFF_ABS(1.8, -1.4));

	return 0;
}