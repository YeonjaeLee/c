#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main1(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();					//입력버퍼 비우기

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;

}


/*
참고. Chapter21 - 05, 06
엔터키 입력 문제 해결

1.	정상 출력
주민번호 앞 6자리 입력: 921105
이름 입력: 이연재
주민번호: 921105
이름: 이연재

2.	어떠한 경우에도 주민번호 6자리만 입력 받음
주민번호 앞 6자리 입력: 921105-1122345
이름 입력: 이연재
주민번호: 921105
이름: 이연재
*/