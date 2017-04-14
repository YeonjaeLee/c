#include <iostream>
#include "Car.h"

using namespace std;

int main(void)
{
	cout << "Exam05 :" << endl;

	Car run99;
	run99.InitMembers("run99", 100);
	run99.Accel();
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77;
	sped77.InitMembers("sped77", 100);
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}

/*
C++은 클래스 별로 헤더파일과 소스파일을 생성해서 클래스의 선언과 정의를 분리해서 사용한다.#
- 클래스의 선언(.h) - declaration
- 클래스의 정의(.cpp) - definition

인라인 함수는 헤더파일에 함께 넣어야 한다.
*/
