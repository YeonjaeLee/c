#include <iostream>

using namespace std;

class Food1
{
public:
	void print1()
	{
		cout << "�θ�Ŭ����(���Ŭ����) ����Ʈ : " << endl;
	}
};

class Fruit1 : public Food1
{
public:
	void print2()
	{
		cout << "�ڽ�Ŭ����(�Ļ�Ŭ����) ����Ʈ : " << endl;
	}
};

int main1()
{
	Fruit1 myFruit;

	// �θ� Ŭ������ ��� �Լ� ȣ��
	myFruit.print1();

	// ���� Ŭ������ ��� �Լ� ȣ��
	myFruit.print2();

	return 0;
}