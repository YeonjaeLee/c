#include <stdio.h>

//#define ADD 1
#define MIN 0

int main6(void)
{
	int num1, num2;
	printf("두 개의 정수 입력: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD		// 매크로 ADD가 정의되었다면
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN		// 매크로 MIN이 정의되었다면
	printf("%d - %d = %d \n", num1, num2, num1 + num2);
#endif

	return 0;
}

/*
ADD와 MIN의 정의 여부만 중요한 상황이기때문에
#define ADD
#define MIN
로 정의 가능
*/