#include <stdio.h>

int Factorial13(int n)
{
	if (n == 0)
		return 1;
	else
		return n * Factorial13(n - 1);
}

int main13(void)
{
	printf("1! = %d \n", Factorial13(1));
	printf("2! = %d \n", Factorial13(2));
	printf("3! = %d \n", Factorial13(3));
	printf("4! = %d \n", Factorial13(4));
	printf("9! = %d \n", Factorial13(9));

	return 0;
}