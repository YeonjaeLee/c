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
};

void ShowCarState(const Car &car)
{
	cout << "소유자ID: " << car.gamerID << endl;
	cout << "연료량: " << car.fuelGauge << "%" << endl;
	cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;
}

void Accel(Car &car)
{
	if (car.fuelGauge <= 0)
		return;
	else
		car.fuelGauge = car.fuelGauge - FUEL_STEP;

	if (car.curSpeed + ACC_STEP >= MAX_SPD)
	{
		car.curSpeed = MAX_SPD;
		return;
	}

	car.curSpeed = car.curSpeed + ACC_STEP;
}

void Break(Car &car)
{
	if (car.curSpeed < BRK_STEP)
	{
		car.curSpeed = 0;
		return;
	}

	car.curSpeed = car.curSpeed - BRK_STEP;
}

int main(void)
{
	cout << "Exam01 :" << endl;

	Car run99 = { "run99", 100, 0 };
	Accel(run99);
	Accel(run99);
	ShowCarState(run99);
	Break(run99);
	ShowCarState(run99);

	Car sped77 = { "sped77", 100, 0 };
	Accel(sped77);
	Break(sped77);
	ShowCarState(sped77);

	return 0;
}

/*
C++에서는 기본 자료형 변수의 선언방식이나 구조체를 기반으로 정의된 자료형의 변수 선언방식에 차이가 없다.
C++에서는 별도의 typedef 선언 없이도 구조체 변수를 선언할 수 있다.
: struct Car basicCar;
: Car basicCar;

위의 함수들은 구조체 Car에 종속적인 함수들이다. 그럼에도 불구하고 전역함수의 형태를 띠기 때문에,
이 함수들이 구조체 Car에 종속적임을 나타내지 못하고 있는 상황이다.
*/
