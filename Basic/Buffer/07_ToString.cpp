//#define _CRT_SECURE_NO_WARNINGS

#include "iostream"
#include <sstream>

using namespace std;

int main7_2()
{
	char sNum[] = "1234567";
	int nUserScore = 100;
	int nComScore = 200;

	//--------------------------------------------
	int nNum = atoi(sNum);
	printf("%d \n", nNum);

	//---------------------------------------------
	char myNum[20] = { 0 };
	sprintf(myNum, "Your Score : %d", nUserScore);
	printf("%s \n", myNum);

	//---------------------------------------------
	stringstream out2;
	out2 << nComScore;
	string comNum = "Computer Score : " + out2.str() + "\n";
	cout << comNum.c_str();

	return 0;
}

/*
1. 정상 실행
1234568
Your Score : 100
*/