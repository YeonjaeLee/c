// 다중 상속

#include <iostream>

using namespace std;

class Phone
{
public:
	void power()
	{
		cout << "Phone : called" << endl;
	}
};

class Printer
{
public:
	void power()
	{
		cout << "Printer : called" << endl;
	}
};

class Fax : public Phone, public Printer
{
public:
	void power()
	{
		cout << "Fax : called" << endl;
	}
};

int main3(void)
{
	Fax myFax;

	// 네임스페이스를 이용하여 부모클래스의 멤버 함수를 호출
	myFax.Phone::power();
	myFax.Printer::power();
	myFax.power();

	return 0;
}

// 다중 상속시 각각의 기본 클래스에 정의된 같은 이름의 멤버 함수 호출