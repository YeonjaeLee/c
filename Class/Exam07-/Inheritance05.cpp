// �Լ��� ������
#include <iostream>

using namespace std;

class Food5
{
public:
	void print(int n1)
	{
		cout << "Food5 : " << n1 << endl;
	}
};

class Fruit5 :public Food5
{
public:
	// �Լ��� ������ : �Լ���, �μ�, ��ȯ���� �����ؾ� ��
	void print(int n2)
	{
//		Food5::print(n2);		// ���Ⱑ ȣ��Ǹ� ��� �߰��� �ȴ�.
		cout << "Fruit5 : " << n2 + 100 << endl;
	}
};

int main5(void)
{
	Fruit5 myFruit;

	myFruit.print(10);
	myFruit.Food5::print(10);

	return 0;
}