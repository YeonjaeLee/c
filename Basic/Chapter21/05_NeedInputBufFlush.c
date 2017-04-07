#include <stdio.h>

int main5(void)
{
	char perID[7];
	char name[10];

	fputs("주민번호 앞 6자리 입력: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", perID[i]);
	}
	printf("\n\n\n");
	// Enter 값이 아직 사용안되고 있는 상황
	// "이름 입력: "이 넘어가버림

	fputs("이름 입력: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("주민번호: %s \n", perID);
	printf("이름: %s \n", name);

	return 0;

}

/*
1.	엔터 키가 남아서 문제
주민번호 앞 6자리 입력: 921105
이름 입력: 주민번호: 921105
이름:

2.	말 안듣는 입력
주민번호 앞 6자리 입력: 921105-1122345
이름 입력: 주민번호: 921105
이름: -1122345
*/