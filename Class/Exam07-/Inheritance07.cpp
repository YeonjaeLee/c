// 순수 가상 함수

#include <iostream>

using namespace std;

class Food7
{
public:
	virtual void print(int n) = 0;	// 순수 가상 함수
};

class Fruit7 : public Food7
{
public:
	// 순수 가상 함수의 재정의(Overriding)
	void print(int n)
	{
		cout << (n + 100) << endl;
	}
};

class Fish7 : public Food7
{
public:
	// 순수 가상 함수의 재정의(Overriding)
	void print(int n)
	{
		cout << (n + 200) << endl;
	}
};

int main7()
{
	Fruit7 myFruit;
	myFruit.print(5);

	Fish7 myFish;
	myFish.print(5);

	return 0;
}

// 기본 클래스에서 내용을 정의하지 않는 가상 함수를 순수 가상 함수라고 한다.
//
// 순수 가상 함수는 파생 클래스에서 함수의 내용을 결정한다.
// 순수 가상 함수를 포함하는 클래스의 오브젝트는 생성할 수 없다.
// 즉, 누구의 부모만 될 수 있다.