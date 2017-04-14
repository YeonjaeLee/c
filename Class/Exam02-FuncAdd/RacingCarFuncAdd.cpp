#include <iostream>

using namespace std;

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

struct Car
{
	char gamerID[ID_LEN];		// 소유자ID
	int fuelGauge;				// 연료량
	int curSpeed;				// 현재속도

	void ShowCarState()
	{
		cout << "소유자ID: " << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}

	void Accel()
	{
		if (fuelGauge <= 0)
			return;
		else
			fuelGauge = fuelGauge - FUEL_STEP;

		if (curSpeed + ACC_STEP >= MAX_SPD)
		{
			curSpeed = MAX_SPD;
			return;
		}

		curSpeed = curSpeed + ACC_STEP;
	}

	void Break()
	{
		if (curSpeed < BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed = curSpeed - BRK_STEP;
	}
};

int main(void)
{
	cout << "Exam02 :" << endl;

	Car run99 = { "run99", 100, 0 };
	run99.Accel();
	run99.Accel();
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accel();
	sped77.Break();
	sped77.ShowCarState();

	return 0;
}

/*
C++에서는 구조체 안에 함수를 삽입하는 것이 허용된다.
함수가 구조체 내에 삽입되면서 구조체 내에 선언된 변수에 직접접근이 가능해진다.

모든 구조체 변수 내에 함수가 각각 별도로 존재하는 것처럼 묘사해 놨는데,
실제로는 모든 Car 구조체 변수가 하나의 함수를 공유한다.
- 논리적으로 각각의 변수가 자신의 함수를 별도로 지니는 것과 같은 효과 및 결과를 보인다.
*/