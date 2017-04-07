#include <stdio.h>

int main3(void)
{
	char str1[20] = "1234567890";
	char str2[20];
	char str3[5];

	/**** case 1 ****/
	strcpy(str2, str1);
	puts(str2);

	/**** case 2 ****/
	strncpy(str3, str1, sizeof(str3));
	puts(str3);

	/**** case 3 ****/
	strncpy(str3, str1, sizeof(str3) - 1);
	str3[sizeof(str3) - 1] = 0;
	puts(str3);

	return 0;
}

/*
- strcpy(str2, str1); : str1�� str2�� ����
- strncpy(str2, str1, size); : str1�� str2�� size��ŭ ����

1.	���� ���
1234567890
12345����������?234567890
1234

case 2 : �� ���ڰ� ������� �ʾұ� ����
*/