#include <stdio.h>

// #define STNUM(Y, S, P)	YSP
// #define STNUM(Y, S, P)	Y S P
#define STNUM(Y, S, P)	((Y)*100000 + (S)*1000 + (P))
// �ܼ� ����
// #define STNUM(Y, S, P)	Y ## S ## P

int main10(void)
{
	printf("�й�: %d \n", STNUM(10, 65, 175));
	printf("�й�: %d \n", STNUM(10, 65, 075));
//	printf("�й�: %d \n", STNUM(10, 65, 75));	// �� �����ؾ� �Ѵ�.

	return 0;
}

/*
- ���� ���
�й�: 1065175
�й�: 1065061
-> 1065075�� ġȯ�� �̷����� �ʾҴ�. 075�� 8������ �ؼ��� ����̴�.

�ʿ��� ���´�� �ܼ� ���� : ## ������
#define STNUM(Y, S, P)	Y ## S ## P
*/