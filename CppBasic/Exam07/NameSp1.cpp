#include <iostream>

namespace my1
{
	void SimpleFunc(void)
	{
		std::cout << "my1�� ������ �Լ�" << std::endl;
	}
}

namespace my2
{
	void SimpleFunc(void)
	{
		std::cout << "my2�� ������ �Լ�" << std::endl;
	}
}

int main1(void)
{
	my1::SimpleFunc();
	my2::SimpleFunc();

	return 0;
}

/*
������ :: �� ������ '�������� ������(scope resolution operator)'�� �ϸ�,
�� �̸��� �ǹ��ϵ��� �̸������� ������ �� ����ϴ� �������̴�.
*/