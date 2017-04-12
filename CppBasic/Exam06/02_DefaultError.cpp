#include <iostream>

int Adder2(int num1 = 1, int num2 = 2)
{
	return num1 + num2;
}

int Adder2(void)
{
	int num1 = 7;
	return num1;
}
int Adder2(int num1 = 1)
{
	return num1;
}

int main2(void)
{
	// std::cout << Adder2() << std::endl;		// 오류
	// std::cout << Adder2(5) << std::endl;
	std::cout << Adder2(3, 5) << std::endl;

	return 0;
}

/*
std::cout << Adder2() << std::endl; 구문에서
Adder2(void)를 불러올지, int Adder2(int num1 = 1)를 불러올지 모른다. -> 오류
웬만하면 default값을 지정하지 말자.
*/