#include <stdio.h>

void ShowArayElem2(int * param, int len)
{
	int i;

	for (i = 0; i < len; i++)
	{
		printf("%d ", param[i]);
	}
	printf("\n");
}

void AddArayElem2(int * param, int len, int add)
{
	int i;
	for (i = 0; i < len; i++)
	{
		param[i] = param[i] + add;
	}
}

int main2(void)
{
	int arr[3] = { 1, 2, 3 };
	AddArayElem2(arr, sizeof(arr) / sizeof(int), 1);
	ShowArayElem2(arr, sizeof(arr) / sizeof(int));

	AddArayElem2(arr, sizeof(arr) / sizeof(int), 2);
	ShowArayElem2(arr, sizeof(arr) / sizeof(int));

	AddArayElem2(arr, sizeof(arr) / sizeof(int), 3);
	ShowArayElem2(arr, sizeof(arr) / sizeof(int));

	return 0;
}