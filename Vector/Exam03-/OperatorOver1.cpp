// 연산자의 오버로딩

#include <iostream>

using namespace std;

class SimpleTime
{
public:
	SimpleTime() {};
	SimpleTime(int h, int m)
	{
		hour = h;
		minute = m;
	}
	SimpleTime operator+(const SimpleTime &st2);

	int hour;
	int minute;
};

SimpleTime SimpleTime::operator+(const SimpleTime &st)
{
	int hour_buf, minute_buf, total;

	total = (hour * 60 + minute) + (st.hour * 60 + st.minute);
	hour_buf = total / 60;
	minute_buf = total % 60;

	return SimpleTime(hour_buf, minute_buf);
}

int main1()
{
	SimpleTime st1(5, 30);
	SimpleTime st2(2, 50);
	SimpleTime st3;

	st3 = st1 + st2;

	cout << st3.hour << "시간 " << st3.minute << "분" << endl;

	return 0;
}

// 연산자의 오버로딩 :
// C++ 언어에서는 +나 - 같이 이미 정의된 연산자에 독자적인 기능을 정의할 수 있다.