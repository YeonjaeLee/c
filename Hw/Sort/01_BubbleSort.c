#include <stdio.h>

int sort1_1(int ar[], int lenn)
{
	int temp = 0, loop, i, count1 = 0, count2 = 0;

	for (loop = 0; loop < lenn - 1; loop++) {
		for (i = 0; i < lenn - 1 - loop; i++) {
			count1++;
			if (ar[i] > ar[i + 1]) {
				count2++;
				temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
// ��ȯ ���� ���
				printf("%d��° ��ȯ:\t", count2);
				for (int a = 0; a < lenn; a++)
				{
					printf("%d ", ar[a]);
				}
				printf("\t( %d <-> %d )\n", ar[i], ar[i+1]);
			}
		}
	}
//	printf("�� �� ��: %d \n", count1);
	return ar;
}

int main1_1(void)
{
	int arr[50] = { 0 };
	int input;
	int len = 0;
	int* ptr = arr;

	printf("��� ���ڸ� �Է��Ͻðڽ��ϱ�? : ");
	scanf("%d", &len);
	printf("%d���� ���� �Է�: ", len);
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &input);
		arr[i] = input;
	}

	printf("---------------------------------------------------------------------\n");
	ptr = sort1_1(arr, len);
	printf("---------------------------------------------------------------------\n");
	printf("\n���ĵ� ��: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d", ptr[i]);
		if (i != len - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	return 0;
}


/*
(1��°, 2��°) �� ��
(2��°, 3��°) �� ��
...						-> ���� ū ���� �迭�� ���������� ������.
(1��°, 2��°) �� ��
(2��°, 3��°) �� ��
...						-> �� ��° ū ���� �迭�� ������ - 1 ���� ������.
...


*/