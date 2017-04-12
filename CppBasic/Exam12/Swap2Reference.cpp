#include <iostream>

using namespace std;

// Call-by-address
void SwapByRef1(int * ptr1, int * ptr2)
{
	int temp = *ptr1;
	*ptr1 = *ptr2;
	*ptr2 = temp;
}

int main2(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByRef1(&val1, &val2);

	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

/*
본래 C언어에서 말하는 Call-by-reference는 다음의 의미를 지닌다.
- 주소 값을 전달받아서, 함수 외부에 선언된 변수에 접근하는 형태의 함수호출
*/
