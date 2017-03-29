#include <stdio.h>

int main3(void)
{
	int num1 = 7, num2 = 13;

	printf("%o %#o \n", num1, num1);
	printf("%x %#x \n", num2, num2);

	return 0;

}

// #을 삽입하면 8진수 앞에 0, 16진수 앞에 0x가 삽입된다.