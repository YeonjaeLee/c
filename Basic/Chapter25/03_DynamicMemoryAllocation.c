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
- 힙 영역으로의 메모리 공간 할당
void * ptr1 = malloc(4);
int * ptr2 = (int *)malloc(sizeof(int));
int * ptr3 = (int *)malloc(sizeof(int) * 7);

- 힙 영역에 할당된 메모리 공간 해제
free(void * ptr1);

- 힙 영역의 변수 생성은 사라지지 않는다.
*/