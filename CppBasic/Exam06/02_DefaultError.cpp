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
	// std::cout << Adder2() << std::endl;		// ����
	// std::cout << Adder2(5) << std::endl;
	std::cout << Adder2(3, 5) << std::endl;

	return 0;
}

/*
std::cout << Adder2() << std::endl; ��������
Adder2(void)�� �ҷ�����, int Adder2(int num1 = 1)�� �ҷ����� �𸥴�. -> ����
�����ϸ� default���� �������� ����.
*/