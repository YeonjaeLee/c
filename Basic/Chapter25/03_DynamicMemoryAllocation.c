#include <stdio.h>

int main3(void)
{
	int * ptr1 = (int *)malloc(sizeof(int));
	int * ptr2 = (int *)malloc(sizeof(int) * 7);
	int i;

	*ptr1 = 20;
	for (i = 0; i < 7; i++)
	{
		ptr2[i] = i + 1;
	}

	printf("%d \n", *ptr1);
	for (i = 0; i < 7; i++)
	{
		printf("%d ", ptr2[i]);
	}
	free(ptr1);
	free(ptr2);

	return 0;
}

/*
- �� ���������� �޸� ���� �Ҵ�
void * ptr1 = malloc(4);
int * ptr2 = (int *)malloc(sizeof(int));
int * ptr3 = (int *)malloc(sizeof(int) * 7);

- �� ������ �Ҵ�� �޸� ���� ����
free(void * ptr1);

- �� ������ ���� ������ ������� �ʴ´�.
*/