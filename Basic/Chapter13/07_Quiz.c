// CH13.�����Ϳ� �迭

#include <stdio.h>

/*
����1
���̰� 6�� int�� �迭�� �����Ͽ� 1, 2, 3, 4, 5, 6 ���� �ʱ�ȭ �Ѵ�.
���ο� �迭�� �����Ͽ� ����� ���� ������ ������ �����ϴ� ���α׷��� �ۼ��Ͻÿ�.

�ۼ� ����� �������� ����, ���� ���·�~
*/

int main7(void)
{
	int input[6] = { 1, 2, 3, 4, 5, 6 };
	int output[6] = { 0 };
	int * pnt = input;

	printf("�迭 ���:\t{");
	for (int i = 5; i > -1; i--)
	{
		output[i] = *pnt;
		printf("%d ,", *pnt);
		pnt++;
	}
	printf("\b\b} \n");

	printf("���� �迭 ���:\t{");
	for (int i = 0; i < 6; i++)
	{
		printf("%d ,", output[i]);
	}
	printf("\b\b} \n");

	return 0;
}
