#include <iostream>

namespace Hybrid
{
	void HybFunc(void)
	{
		std::cout << "So simple function!" << std::endl;
		std::cout << "In namespace Hybrid!" << std::endl;
	}
}

int main3(void)
{
	using Hybrid::HybFunc;
	HybFunc();

	return 0;
}

/*
14라인 : HybFunc를 이름공간 Hybrid에서 찾으라
- 키워드 using을 이용해서 '이름공간 Hybrid에 정의된 HybFunc를 호출할 때에는,
이름공간을 지정하지 않고 호출하겠다!'는 것을 명시하고 있다.
이 때, HybFunc는 함수의 이름이 될 수도 있고, 변수의 이름도 될 수 있다.
위의 경우 지역변수의 선언과 마찬가지로 선언된 이후부터 효력을 발휘하며,
선언된 지역을 벗어나면, 지역변수처럼 선언의 효력을 잃게 된다.
*/