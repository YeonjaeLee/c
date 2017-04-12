#include <iostream>

using namespace std;

void SwapByValue(int val1, int val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

int main1(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByValue(val1, val2);

	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

/*
Call-by-value의 형태로 정의된 함수의 내부에서는, 함수외부에 선언된 변수에 접근이 불가능하다.
- SwapByValue에 전달된 인자는 SwapByValue의 지역변수이다.
*/