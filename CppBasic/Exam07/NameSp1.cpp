#include <iostream>

namespace my1
{
	void SimpleFunc(void)
	{
		std::cout << "my1이 정의한 함수" << std::endl;
	}
}

namespace my2
{
	void SimpleFunc(void)
	{
		std::cout << "my2이 정의한 함수" << std::endl;
	}
}

int main1(void)
{
	my1::SimpleFunc();
	my2::SimpleFunc();

	return 0;
}

/*
연산자 :: 을 가리켜 '범위지정 연산자(scope resolution operator)'라 하며,
그 이름이 의미하듯이 이름공간을 지정할 때 사용하는 연산자이다.
*/