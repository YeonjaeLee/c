#include <stdio.h>
#include <stdlib.h>

int main6(void)
{
	char str[20];
	printf("���� �Է�: ");
	scanf("%s", str);
	printf("%d \n", atoi(str));

	printf("�Ǽ� �Է�: ");
	scanf("%s", str);
	printf("%g \n", atof(str));

	return 0;
}

/*
#include <stdlib.h> ���� �ʿ�

- atoi(* str) : ���ڿ� int�� ��ȯ
- atol(* str) : ���ڿ� long�� ��ȯ
- atof(* str) : ���ڿ� double�� ��ȯ

1. ���� ���
���� �Է�: 15
15
�Ǽ� �Է�: 12.456
12.456
*/