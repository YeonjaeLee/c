#include <stdio.h>

void RemoveBSN(char str[])
{
	int len = strlen(str);
	str[len - 1] = 0;
}

int main7(void)
{
	char str[100];
	printf("���ڿ� �Է�: ");
	fgets(str, sizeof(str), stdin);
	printf("����: %d, ����: %s \n", strlen(str), str);

	RemoveBSN(str);
	printf("����: %d, ����: %s \n", strlen(str), str);

	return 0;
}

/*
- strlen : ���ڿ� ���� ��ȯ �Լ�

�Է½� ���� ������ ���̿� ���� ��
Good morning'\n''\0'
str[len - 1] = 0; �� �������ν� NULL�� ��ܿ� ���Ͱ� ����

1.	���� ���
���ڿ� �Է�: Good morning
����: 13, ����: Good morning

����: 12, ����: Good morning
*/