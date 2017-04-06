// CH15. 도전프로그래밍2

#include <stdio.h>

/*
문제1
길이가 10인 배열을 선언하고 총 10개의 정수를 입력받아서 홀수와 짝수를
구분해서 출력하라.
출력예시) 총 10개의 숫자를 입력하시오.
1 2 3 ....... 10개입력
홀수출력 : 1, 3, 5, 7, 9
짝수출력 : 2, 4, 6, 8, 10
*/
int sort1_1(int ar[], int lenn)
{
	int temp = 0, loop, i;

	for (loop = 0; loop < lenn - 1; loop++) {
		for (i = 0; i < lenn - 1 - loop; i++) {
			if (ar[i] > ar[i + 1]) {
				temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
			}
		}
	}
	return ar;
}

int main(void)
{
	int arr[50] = { 0 }, a[10] = { 0 }, b[10] = { 0 };
	int len = 10;
	int input;
	int j = 0, z = 0;
	int* ptr = arr;

	printf("10개의 정수 입력: ");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &input);
		arr[i] = input;

		if (input % 2 == 0)
		{
			a[j] = input;
			j++;
		}
		else
		{
			b[z] = input;
			z++;
		}
	}

	printf("홀수출력: ");
	ptr = sort1_1(b, z);
	for (int i = 0; i < z; i++)
	{
		printf("%d", ptr[i]);
		if (i != z - 1)
		{
			printf(", ");
		}
	}

	printf("\n짝수출력: ");
	ptr = sort1_1(a, j);
	for (int i = 0; i < j; i++)
	{
		printf("%d", ptr[i]);
		if (i != j - 1)
		{
			printf(", ");
		}
	}
	printf("\n");

	return 0;
}

/*
문제2
길이가 10인 배열을 선언한 후 총 10개의 정수를 입력받는다.
단 홀수는 배열의 앞에서 부터 채워나가고 짝수는 배열의 끝에서부터 채워나간다.
출력예시) 총 10개의 정수를 입력하시오.
1 2 3 4 5 6 7 8 9 10
결과 : 1 3 5 7 9 10 8 6 4 2
*/
int sort1_2(int ar[], int lenn)
{
	int temp = 0, loop, i;

	for (loop = 0; loop < lenn - 1; loop++) {
		for (i = 0; i < lenn - 1 - loop; i++) {
			if (ar[i] > ar[i + 1]) {
				temp = ar[i];
				ar[i] = ar[i + 1];
				ar[i + 1] = temp;
			}
		}
	}
	return ar;
}

int main1_2(void)
{
	int arr[10] = { 0 }, a[10] = { 0 }, b[10] = { 0 };
	int len = 10;
	int input;
	int j = 0, z = 0, idx = 0;
	int* ptr = arr;

	printf("10개의 정수 입력: ");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &input);
		arr[i] = input;

		if (input % 2 == 0)
		{
			a[j] = input;
			j++;
		}
		else
		{
			b[z] = input;
			z++;
		}
	}

	ptr = sort1_2(b, z);
	for (int i = 0; i < z; i++)
	{
		arr[i] = ptr[i];
	}

	ptr = sort1_2(a, j);
	for (int i = len - 1; i > len - j - 1; i--)
	{
		arr[i] = ptr[idx];
		idx++;
	}

	printf("결과: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

/*
문제3
회문(Palindrome)은 앞 or 뒤에서 읽어도 동일한 단어를 뜻한다.
noon, level 과 같은 단어들이 회문에 속한다.
사용자로부터 문자열을 입력받은후 회문인지 아닌지 판단하는 프로그램을 작성하시오.
대소문자까지 동일해야 회문으로 인정함.
출력예시)
단어를 입력하시오. : noon
회문입니다.
단어를 입력하시오. : love
회문이 아닙니다.
*/
int main1_3(void)
{
	int len = 0;
	char str[] = "";

	printf("단어를 입력하시오: ");
	scanf("%s", str);

	while (str[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] == str[len - i - 1])
		{
			printf("회문입니다. \n");
			break;
		}
		else
		{
			printf("회문이 아닙니다. \n");
			break;
		}
	}
	return 0;
}