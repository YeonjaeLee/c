// 함수의 오버라이딩
#include <iostream>

using namespace std;

class Food6
{
public:
	virtual void print(int n)
	{
		cout << "print : " << n << endl;
	}
};

class Fruit6 : public Food6
{
public:
	// 가상 함수의 재정의(Overriding) : 함수명, 인수, 반환형이 동일해야 함
	void print(int n)
	{
		Food6::print(100);
		cout << "print : " << n + 100 << endl;
	}
};

int main6()
{
	Food6 * pFood;
	Fruit6 myFruit;

	pFood = &myFruit;
	pFood->print(100);

	return 0;
}

/*
파생클래스에서 재정의한 멤버 함수를 기본 클래스의 포인터로 호출하면
일반적으로 재정의 전의 멤버 함수가 호출됨.
- C++ 컴파일러는 포인터를 이용한 연산의 가능성 여부를 판단할 때, 포인터의 자료형을 기준으로
판단하지, 실제 가리키는 객체의 자료형을 기준으로 판단하지 않는다.

재정의한 후의 멤버 함수가 호출되도록 하기 위해서는
기본 클래스에서 그 함수를 가상 함수로 해둔다.
- 가상함수가 선언되고 나면, 이 함수를 오버라이딩하는 함수도 가상함수가 된다.
- 파생 클래스의 함수가 굳이 virtual 선언을 추가하지 않아도 가상함수가 된다.
: C++의 개념이 아닌 객체지향의 개념이다.

그러므로 상속할 가능성이 있는 클래스의 소멸자는 가상 함수로 만드는 것이 좋다.
- 가상함수와 마찬가지로 소멸자도 상속의 계층구조상 맨 위에 존재하는 기반 클래스의
  소멸자만 virtual로 선언하면, 이를 상속하는 파생 클래스의 소멸자들도 가상 소멸자로 선언이 된다.

  가상 함수를 파생 클래스에서 재정의하는 것을 오버라이딩 이라고 함
*/