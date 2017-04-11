#include <stdio.h>

// ������
#define SQUARE(X)	X * X
//����
//#define SQUARE(X)	((X) * (X))

int main2(void)
{
	int num = 20;

	/* ������ ��� ��� */
	printf("Square of num: %d \n", SQUARE(num));
	printf("Square of -5: %d \n", SQUARE(-5));
	printf("Square of 2.5: %g \n", SQUARE(2.5));

	/* �������� ��� ��� */
	printf("Square of 3+2: %d \n", SQUARE(3+2));

	return 0;
}

/*
- ��� ���
Square of num: 400
Square of -5: 25
Square of 2.5: 6.25
Square of 3+2: 11

- �� ��������?
#define SQUARE(X)	X * X
SQUARE(3+2) -> 3 + 2 * 3 + 2 = 11	����!
SQUARE((3+2)) -> (3 + 2) * (3 + 2) = 25	����ϱ� ����

#define SQUARE(X)	(X) * (X)
SQUARE(3+2) -> (3 + 2) * (3 + 2) = 25	�� ���� �ذ�
num=120/SQUARE(2) -> 120 / (2) * (2)	������ ����

#define SQUARE(X)	((X) * (X))
num=120/SQUARE(2) -> 120 / ((2) * (2))	�ֻ��� �ذ�å!
*/