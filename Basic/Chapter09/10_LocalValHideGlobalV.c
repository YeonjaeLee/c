#include <stdio.h>

int Add10(int val);
int num = 1;

int main10(void)
{
	int num = 5;
	printf("num: %d \n", Add10(3));
	printf("num: %d \n", num + 9);

	return 0;

}

int Add10(int val)
{
	int num = 9;
	num = num + val;

	return num;
}