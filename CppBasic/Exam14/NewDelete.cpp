#include <iostream>
#include <string.h>

using namespace std;

char * MakeStrAdr2(int len)
{
	char * str = new char[len];		// 키워드 new 오른편에, 할당할 대상의 정보를 직접 명시
	return str;
}

int main2(void)
{
	char *str = MakeStrAdr2(20);
	strcpy(str, "I am so happpy~");
	cout << str << endl;
//	free(str);
	delete[]str;		// 배열의 형태로 할당된 메모리 공간의 해제

	return 0;
}