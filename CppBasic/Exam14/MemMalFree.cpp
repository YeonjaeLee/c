#include <iostream>
#include <string.h>
#include <stdlib.h>

using namespace std;

char * MakeStrAdr1(int len)
{
	char * str = (char*)malloc(sizeof(char)*len);
	return str;
}

int main1(void)
{
	char *str = MakeStrAdr1(20);
	strcpy(str, "I am so happpy~");
	cout << str << endl;
	free(str);

	return 0;
}

/*

C������ �����Ҵ��� ������ ����
- �Ҵ��� ����� ������ ������ ����Ʈ ũ������� �����ؾ� �Ѵ�.
- ��ȯ���� void�� �������̱� ������ ������ �� ��ȯ�� ���ľ� �Ѵ�.
- �����ڰ� ȣ����� �ʴ´� ***
*/
