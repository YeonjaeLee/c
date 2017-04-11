#include <stdio.h>

#define PI	3.14
#define PROUDCT(X, Y)	((X) * (Y))
#define CIRCLE_AREA(R)	(PROUDCT((R), (R)) * PI)

int main3(void)
{
	double rad = 2.1;
	printf("반지름 %g인 원의 넓이: %g \n", rad, CIRCLE_AREA(rad));

	return 0;
}

// 앞 줄에서 먼저 정의된 매크로는 새로운 매크로를 정의하는데 있어서 사용될 수 있다.