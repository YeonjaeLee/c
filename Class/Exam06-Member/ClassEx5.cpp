// Ŭ���� �����ڸ� �̿��� �ʱ�ȭ
// ���� ���� ����, �� ���� ����� ���� ��� �Լ� ȣ���

#include <iostream>

using namespace std;

class OrangeBox5
{
private:
	int total;
public:
	OrangeBox5()
	{
		cout << "������Ʈ ������ 51" << endl;
		total = 0;
	}
	OrangeBox5(int n)
	{
		cout << "������Ʈ ������ 52" << endl;
		total = n;
	}
	void GetTotal()
	{
		cout << "total : " << total << endl;
	}
};

int main5()
{
	OrangeBox5 obox1;
	obox1.GetTotal();

	OrangeBox5 obox2(10);
	obox2.GetTotal();

	OrangeBox5 * obox3 = new OrangeBox5;
//	(*oBox3).GetTotal() == oBox3->GetTotal()
	obox3->GetTotal();

	OrangeBox5 * obox4 = new OrangeBox5(10);
	obox4->GetTotal();

	return 0;
}