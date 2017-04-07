#include <stdio.h>
#include <math.h>

struct person
{
	char name[20];
	char phoneNum[20];
	int age;
};

int main2(void)
{
	struct person man1, man2;
	strcpy(man1.name, "안성준");
	strcpy(man1.phoneNum, "010-1122-3344");
	man1.age = 23;

	printf("이름 입력: ");
	scanf("%s", man2.name);
	printf("번호 입력: ");
	scanf("%s", man2.phoneNum);
	printf("나이 입력: ");
	scanf("%d", &(man2.age));

	printf("이름: %s \n", man1.name);
	printf("번호: %s \n", man1.phoneNum);
	printf("나이: %d \n", man1.age);

	printf("이름: %s \n", man2.name);
	printf("번호: %s \n", man2.phoneNum);
	printf("나이: %d \n", man2.age);

	return 0;
}


/*
1.	실행 화면
이름 입력: 김수정
번호 입력: 010-0001-0002
나이 입력: 27
이름: 안성준
번호: 010-1122-3344
나이: 23
이름: 김수정
번호: 010-0001-0002
나이: 27
계속하려면 아무 키나 누르십시오 . . .
*/