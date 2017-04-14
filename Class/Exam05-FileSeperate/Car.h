#ifndef __CAR_H__		// 헤더파일 중복 include 시 확인
#define __CAR_H__

#define ID_LEN		20
#define MAX_SPD		200
#define FUEL_STEP	2
#define ACC_STEP	10
#define BRK_STEP	10

class Car
{
	// public : 어디서든 접근 가능
	// protected : 상속관계에 놓여있을 때, 파생 클래스에서의 접근 허용
	// private : 클래스 내에서만 접근 허용 (default)
private:
	char gamerID[ID_LEN];		// 소유자ID
	int fuelGauge;				// 연료량
	int curSpeed;				// 현재속도
public:
	void InitMembers(char * ID, int fuel);
	void ShowCarState();
	void Accel();
	void Break();
};

#endif