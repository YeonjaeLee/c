// 오브젝트의 생성자, 소멸자

#include <iostream>

using namespace std;

class OrangeBox4
{
public:
	// 생성자 : 오브젝트를 생성할 때 자동적으로 호출되는 특수한 함수
	//		  : 반환값이 없으며, void 형도 지정하지 않는다.
	OrangeBox4()
	{
		cout << "오브젝트 생성됨" << endl;
	}
	// 소멸자 : 오브젝트가 역할을 마쳤을 때 자동적으로 호출되는 특수한 함수
	//		  : 반환값이 없으며, void 형도 지정하지 않는다.
	//		  : 인수도 없다.
	~OrangeBox4()
	{
		cout << "오브젝트 소멸됨" << endl;
	}
};

int main4(void)
{
	// 정적 객체 생성. 유효 범위가 끝날 때, 소멸자가 호출된다.
	OrangeBox4 obox;

	return 0;
}

/*
// 동적 객체 생성
OrangeBox4 * obox2 = new OrangeBox4;
// 동적 객체 소멸
delete obox2;
*/
