#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

int main1()
{
	int num;
	int com;

	//printf("%d \n", (int)time(NULL));

	srand((int)time(NULL));  // random초기화는 변수가 몇개여도﻿ 한번만 쓰면 된다.

	num = rand() % 10;  // random값 (0~42억개의 숫자가 지정된다.)
	printf("생성된 숫자 : %d \n", num);

	return 0;
}