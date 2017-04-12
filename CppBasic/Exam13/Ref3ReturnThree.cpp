#include <iostream>

using namespace std;

int & RefRetFuncOne3(int &ref)
{
	ref++;
	return ref;
}

int main3(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne3(num1);
//	int &num2 = RefRetFuncOne3(num1);

	num1 = num1 + 1;
	num2 = num2 + 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

/*
참조를 대상으로 값을 반환
*/