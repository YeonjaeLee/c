#include <stdio.h>

//�߸� ���ǵ� ��ũ�� (��ҹ��� ����)
//#define DIFF_ABS(X, Y)	((x)>(y) ? (x)-(y) : (y)-(x))
//�ùٸ� ����
#define DIFF_ABS(x, y)	((x)>(y) ? (x)-(y) : (y)-(x))

int main4(void)
{
	printf("�� ���� ��: %d \n", DIFF_ABS(5, 7));
	printf("�� ���� ��: %g \n", DIFF_ABS(1.8, -1.4));

	return 0;
}