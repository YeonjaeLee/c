#include <iostream>
#include <string.h>

using namespace std;

char * MakeStrAdr2(int len)
{
	char * str = new char[len];		// Ű���� new ��������, �Ҵ��� ����� ������ ���� ����
	return str;
}

int main2(void)
{
	char *str = MakeStrAdr2(20);
	strcpy(str, "I am so happpy~");
	cout << str << endl;
//	free(str);
	delete[]str;		// �迭�� ���·� �Ҵ�� �޸� ������ ����

	return 0;
}