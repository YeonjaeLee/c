#include <iostream>

namespace my11
{
	void SimpleFunc(void);
}

namespace my22
{
	void SimpleFunc(void);
}

int main2(void)
{
	my11::SimpleFunc();
	my22::SimpleFunc();

	return 0;
}

namespace my11
{
	void SimpleFunc(void)
	{
		std::cout << "my11이 정의한 함수" << std::endl;
	}
}

void my22::SimpleFunc(void)
{
	std::cout << "my22이 정의한 함수" << std::endl;
}

/*
이름공간 기반의 함수 선언과 정의의 구분
선언은 네임스페이스를 그대로 표현해야 하고,
정의는 줄여서 표현할 수 있다.
*/