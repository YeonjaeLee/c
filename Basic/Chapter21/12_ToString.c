//#define _CRT_SECURE_NO_WARNINGS

#include "stdio.h"

int main12_1()
{
	char sNum[] = "1234567";
	int nUserScore = 100;
	int nComScore = 200;

	//--------------------------------------------
	int nNum = atoi(sNum) + 1;
	printf("%d \n", nNum);

	//---------------------------------------------
	char myNum[20] = { 0 };
	sprintf(myNum, "Your Score : %d", nUserScore);
	printf("%s \n", myNum);

	return 0;

}

/*
1. 정상 실행
1234568
Your Score : 100
*/