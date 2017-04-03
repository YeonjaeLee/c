#include <stdio.h>

void Recursive12(int num)
{
	if (num <= 0)
		return;
	printf("Recursive call! %d \n", num);
	Recursive12(num - 1);
}

int main12(void)
{
	Recursive12(3);

	return 0;
}