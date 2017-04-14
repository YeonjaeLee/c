// 접근 제한자의 종류

#include <iostream>

using namespace std;

class Food2
{
private:
	int price1;
protected:
	int price2;
public:
	int price3;

	Food2()
	{
		price1 = 0;
		price2 = 0;
		price3 = 0;
	}
};

class Fruit2 : public Food2
{
public:
	void print1()
	{
		// 부모 클래스의 private 멤버 변수에 접근이 안된다. 접근시 에러.
		// cout << "price1 : " << price1 << endl;
	}
	void print2()
	{
		cout << "price2 : " << price2 << endl;
	}
	void print3()
	{
		cout << "price3 : " << price3 << endl;
	}
};

int main2()
{
	Fruit2 myFruit;

	myFruit.print1();
	myFruit.print2();
	myFruit.print3();

	Food2 myFood;
	//int nP1 = myFood.price1;
	//int nP2 = myFood.price2;
	int nP3 = myFood.price3;
	cout << "price3 : " << nP3 << endl;

	return 0;
}

/*
protected를 사용하면 파생 클래스에서는 접근할 수 있어도,
다른 클래스나 글로벌 함수에서는 접근할 수 없다.
*/