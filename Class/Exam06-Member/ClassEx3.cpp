// 멤버함수 호출

#include <iostream>

using namespace std;

class OrangeBox3
{
private:
	int total;
public:
	void Add(int num);
	void Del(int num);
	void Empty();
	int GetTotal()
	{
		return total;
	}
};

void OrangeBox3::Add(int num)
{
	total = total + num;
}

void OrangeBox3::Del(int num)
{
	total = total - num;
	if (total < 0)
	{
		Empty();
	}
}

void OrangeBox3::Empty()
{
	total = 0;
}

int main3()
{
	// 정적 객체 생성
	OrangeBox3 obox1;
	//obox::Empty();
	obox1.Empty();
	obox1.Add(5);
	obox1.Del(4);
	int nResult = obox1.GetTotal();
	cout << "obox1: " << nResult << endl;

	OrangeBox3 * obox2 = new OrangeBox3;
	(*obox2).Empty();
	obox2->Add(2);
//	delete obox2;
	nResult = obox2->GetTotal();
	cout << "obox2: " << nResult << endl;

	return 0;
}