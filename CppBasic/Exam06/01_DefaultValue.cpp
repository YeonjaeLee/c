#include <iostream>

int Adder1(int num1 = 1, int num2 = 2);

int main1(void)
{
	std::cout << Adder1() << std::endl;
	std::cout << Adder1(5) << std::endl;
	std::cout << Adder1(3, 5) << std::endl;
	
	return 0;
}

int Adder1(int num1, int num2)
{
	return num1 + num2;
}

/*
인자의 갯수가 모자르면 앞의 값부터 적용되고,
뒤의 전달되지 않은 인자는 디폴트 값이 적용된다.

디폴트 값은 함수의 선언 부분에만 표현하면 된다.
*/