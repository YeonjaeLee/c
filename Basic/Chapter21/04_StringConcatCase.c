#include <stdio.h>

int main4(void)
{
	char str1[20] = "First~";
	char str2[20] = "Second";

	char str3[20] = "Simple num: ";
	char str4[20] = "1234567890";

	/**** case 1 ****/
	strcat(str1, str2);
	puts(str1);

	/**** case 2 ****/
	strncat(str3, str4, 7);
	puts(str3);

	return 0;

}

/*
- strcat(str1, str2) : str1�� str2�� ���ڿ� �����̴� �Լ�
- strncat(str1, str2, size) : str1�� str2�� size + 1(NULL����)��ŭ ���ڿ� �����̴� �Լ�

1. ���� ���
First~Second
Simple num: 1234567

*/