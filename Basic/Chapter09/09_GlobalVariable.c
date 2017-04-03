#include <stdio.h>

void Add9(int val);
int num;

int main9(void)
{
	printf("num: %d \n", num);
	Add9(3);
	printf("num: %d \n", num);
	num++;
	printf("num: %d \n", num);

	return 0;

}

void Add9(int val)
{
	num = num + val;
}