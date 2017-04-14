// 클래스 생성자를 이용한 초기화
// 정적 동적 생성, 각 생성 방법에 따른 멤버 함수 호출법

#include <iostream>

using namespace std;

class OrangeBox5
{
private:
	int total;
public:
	OrangeBox5()
	{
		cout << "오브젝트 생성됨 51" << endl;
		total = 0;
	}
	OrangeBox5(int n)
	{
		cout << "오브젝트 생성됨 52" << endl;
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