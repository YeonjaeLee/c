// 자식 오브젝트를 부모 오브젝트에 대입
#include <iostream>

using namespace std;

class Food4
{
private:
	int price;
public:
	void SetPrice(int myprice)
	{
		cout << "Food4 : " << myprice << endl;
	}
};

class Fruit4 : public Food4
{
public:
	void SetPrice2()
	{
		cout << "Fruit4 : " << endl;
	}
};

class Snack4 : public Food4
{
public:
	void SetPrice2()
	{
		cout << "Snack4 : " << endl;
	}
};

int main4()
{
	Food4 *pFood[2];
	Fruit4 myFruit;
	Snack4 mySnack;

	pFood[0] = &myFruit;
	pFood[1] = &mySnack;
	for (int i = 0; i <= 1; i++)
	{
		pFood[i]->SetPrice(100);
		//pFood[i]->SetPrice2();	// 없는건 호출이 안된다.
	}

	return 0;
}

/*
기본 클래스의 오브젝트를 파생 클래스의 오브젝트로 대입할 수 없다.
- 기본 클래스에 파생 클래스로 대입할 수 항목이 없을 수 있다.
파생 클래스 오브젝트의 어드레스를 기본 클래스의 포인터에 대입할 수 있다.
- 기본 클래스의 포인터를 사용하여 파생 클래스의 포인터 함수를 호출할 수 있다.
*/