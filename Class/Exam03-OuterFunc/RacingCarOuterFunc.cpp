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

	void ShowCarState();
	void Accel();
	void Break();
};

// inline void Car::ShowCarState()
void Car::ShowCarState()
{
	cout << "소유자ID: " << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}

void Car::Accel()
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

void Car::Break()
{
	if (curSpeed < BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed = curSpeed - BRK_STEP;
}

int main(void)
{
	cout << "Exam03 :" << endl;

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
함수의 원형선언을 구조체 안에 두고, 함수의 정의를 구조체 밖으로 빼낸 경우

구조체 안에 함수가 정의되어 있으면, 다음의 의미가 더불어 내포된다.
- 함수를 인라인으로 처리해라.
반면, 함수를 구조체 밖으로 꺼내면, 이러한 의미가 사라진다.
따라서 인라인의 의미를 그대로 유지하려면 키워드 inline을 이용해서 인라인 처리를
명시적으로 지시해야 한다.
*/