#include <stdio.h>
#include <stdlib.h>

// 오름차순
int compare2(void *first, void *second)
{
	if (*(int*)first > *(int*)second)
		return 1;
	else if (*(int*)first < *(int*)second)
		return -1;
	else
		return 0;
}

int main2(int argc, char** argv)
{
	int arr[] = { 4, 3, 1, 7, 5, 9, 8, 2, 6 };
	int arr_size = sizeof(arr) / sizeof(int);
	int i;

	// before sort
	for (i = 0; i < arr_size; i++)
		printf("%d", arr[i]);
	printf("\n");

	// apply quick sort
	qsort(arr, arr_size, sizeof(int), compare2);

	// after sort
	for (i = 0; i < arr_size; i++)
		printf("%d", arr[i]);
	printf("\n");

	return 0;
}


/*
시작시 처음 i, 끝 j를 잡아
비교 후 바꾸고
(바뀐)i자리를 기준점으로 j 올리거나 내리며 정렬

3 - 0 - 1 - 8 - 7 - 2 - 5 - 4 - 9 - 6
i                                 <-j
3 - 0 - 1 - 8 - 7 - 2 - 5 - 4 - 9 - 6
i                   j
2 - 0 - 1 - 8 - 7 - 3 - 5 - 4 - 9 - 6
j->                 i
2 - 0 - 1 - 8 - 7 - 3 - 5 - 4 - 9 - 6
j       i
2 - 0 - 1 - 3 - 7 - 8 - 5 - 4 - 9 - 6
i     <-j
2 - 0 - 1 - 3 - 7 - 8 - 5 - 4 - 9 - 6
i   j
2 - 0 - 1 - 3 - 7 - 8 - 5 - 4 - 9 - 6
x
2 - 0 - 1 - 3 - 7 - 8 - 5 - 4 - 9 - 6
i       j   x
1 - 0 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
j->     i   x
1 - 0 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
j   i   x
1 - 0 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
x   x
1 - 0 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
i	j	x   x
0 - 1 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
j	i	x   x
0 - 1 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
x	x   x
0 - 1 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
ij	x	x   x
0 - 1 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
x	x	x   x
0 - 1 - 2 - 3 - 7 - 8 - 5 - 4 - 9 - 6
x	x	x   x	i				  <-j
0 - 1 - 2 - 3 - 6 - 8 - 5 - 4 - 9 - 7
x	x	x   x	j->					i





*/