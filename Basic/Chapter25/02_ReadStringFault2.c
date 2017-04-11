#include <stdio.h>

char name[30];

char * ReadUserName2(void)
{
	printf("What's your name? ");
	gets(name);
	return name;
}

int main2(void)
{
	char * name1;
	char * name2;
	name1 = ReadUserName2();
	printf("name1: %s \n", name1);
	name2 = ReadUserName2();
	printf("name2: %s \n", name2);

	printf("name1: %s \n", name1);
	printf("name2: %s \n", name2);

	return 0;
}


/*
- 실행 화면
What's your name? Yoon sung woo
name1: Yoon sung woo
What's your name? Choi jun kyung
name2: Choi jun kyung
name1: Choi jun kyung
name2: Choi jun kyung

-> 포인터로 받았기 때문에 오류

전역변수는 답이 될 수 없다.
*/