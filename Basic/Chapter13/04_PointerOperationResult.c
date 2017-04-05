#include <stdio.h>

int main4(void)
{
	int num1 = 0;
	int * ptr1 = &num1;
	double num2 = 0.0;
	double * ptr2 = &num2;

	printf("%p %p \n", ptr1 + 1, ptr1 + 2);
	printf("%p %p \n", ptr2 + 1, ptr2 + 2);

	printf("%p %p \n", ptr1, ptr2);
	ptr1++;
	ptr2++;
	printf("%p %p \n", ptr1, ptr2);

	return 0;
}