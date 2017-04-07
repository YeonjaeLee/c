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
// 변환 과정 출력
				printf("%d번째 변환:\t", count2);
				for (int a = 0; a < lenn; a++)
				{
					printf("%d ", ar[a]);
				}
				printf("\t( %d <-> %d )\n", ar[i], ar[i+1]);
			}
		}
	}
//	printf("총 비교 수: %d \n", count1);
	return ar;
}

int main1_1(void)
{
	int arr[50] = { 0 };
	int input;
	int len = 0;
	int* ptr = arr;

	printf("몇개의 숫자를 입력하시겠습니까? : ");
	scanf("%d", &len);
	printf("%d개의 정수 입력: ", len);
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &input);
		arr[i] = input;
	}

	printf("---------------------------------------------------------------------\n");
	ptr = sort1_1(arr, len);
	printf("---------------------------------------------------------------------\n");
	printf("\n정렬된 수: ");
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
(1번째, 2번째) 수 비교
(2번째, 3번째) 수 비교
...						-> 가장 큰 수를 배열의 마지막으로 보낸다.
(1번째, 2번째) 수 비교
(2번째, 3번째) 수 비교
...						-> 두 번째 큰 수를 배열의 마지막 - 1 으로 보낸다.
...


*/