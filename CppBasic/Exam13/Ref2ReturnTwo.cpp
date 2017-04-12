#include <iostream>

using namespace std;

int & RefRetFuncOne2(int &ref)
{
	ref++;
	return ref;
}

int main2(void)
{
	int num1 = 1;
	int num2 = RefRetFuncOne2(num1);

	num1 = num1 + 1;
	num2 = num2 + 100;

	cout << "num1: " << num1 << endl;
	cout << "num2: " << num2 << endl;

	return 0;
}

/*
반환형은 참조이되 반환은 변수

반환형이 참조값인 경우, 반환 값을 무엇으로 저장하느냐에
따라서 그 결과에 차이가 있다.

지역변수를 참조형으로 반환하는 일이 없어야 한다.
- 함수가 반환이 되면, 지역변수는 소멸이 된다.
- 찌꺼기의 형태로 남아있는 데이터를 참조하게 된다.
 (정상적인 데이터일 경우도...)
*/