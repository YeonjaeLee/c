#include <stdio.h>

//#define ADD 1
#define MIN 0

int main6(void)
{
	int num1, num2;
	printf("�� ���� ���� �Է�: ");
	scanf("%d %d", &num1, &num2);

#ifdef ADD		// ��ũ�� ADD�� ���ǵǾ��ٸ�
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif

#ifdef MIN		// ��ũ�� MIN�� ���ǵǾ��ٸ�
	printf("%d - %d = %d \n", num1, num2, num1 + num2);
#endif

	return 0;
}

/*
ADD�� MIN�� ���� ���θ� �߿��� ��Ȳ�̱⶧����
#define ADD
#define MIN
�� ���� ����
*/