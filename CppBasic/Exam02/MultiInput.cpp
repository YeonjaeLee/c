#include <iostream>

int main(void)
{
	int val1, val2;
	int result = 0;

	// 입력 데이터간 경계는 탭, 스페이스, 엔터 등 공백에 의해 나눠진다.
	std::cout << "두개의 정수 입력: ";
	std::cin >> val1 >> val2;

	if (val1 < val2)
	{
		for (int i = val1 + 1; i < val2; i++)
		{
			result = result + i;
		}
	}
	else
	{
		for (int i = val2 + 1; i < val1; i++)
		{
			result = result + i;
		}
	}

	std::cout << "두 수 사이의 정수 합: " << result << std::endl;

	return 0;
}