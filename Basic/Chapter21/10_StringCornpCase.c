#include <stdio.h>

int main10(void)
{
	char str1[20];
	char str2[20];

	printf("���ڿ� �Է� 1: ");
	scanf("%s", str1);

	printf("���ڿ� �Է� 2: ");
	scanf("%s", str2);

	if (!strcmp(str1, str2))
	{
		puts("�� ���ڿ��� �Ϻ��� �����մϴ�.");
	}
	else
	{
		puts("�� ���ڿ��� �������� �ʽ��ϴ�.");

		if (!strncmp(str1, str2, 3))
		{
			puts("�׷��� �� �� ���ڴ� �����մϴ�.");
		}
	}
	return 0;
}

/*
- strcmp(str1, str2) : str1�� str2�� ��
					   str1�� �� ũ�� 0���� ū �� ��ȯ
					   str2�� �� ũ�� 0���� ���� �� ��ȯ
					   str1�� str2 ������ 0 ��ȯ
- strncmp(str1, str2, size) : str1�� str2�� size��ŭ ��

1. ���� ���
���ڿ� �Է� 1: Simple
���ڿ� �Է� 2: Simon
�� ���ڿ��� �������� �ʽ��ϴ�.
�׷��� �� �� ���ڴ� �����մϴ�.
*/