// CH15. �������α׷���2

#include <stdio.h>

/*
����1
���̰� 10�� �迭�� �����ϰ� �� 10���� ������ �Է¹޾Ƽ� Ȧ���� ¦����
�����ؼ� ����϶�.
��¿���) �� 10���� ���ڸ� �Է��Ͻÿ�.
1 2 3 ....... 10���Է�
Ȧ����� : 1, 3, 5, 7, 9
¦����� : 2, 4, 6, 8, 10
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

	printf("10���� ���� �Է�: ");
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

	printf("Ȧ�����: ");
	ptr = sort1_1(b, z);
	for (int i = 0; i < z; i++)
	{
		printf("%d", ptr[i]);
		if (i != z - 1)
		{
			printf(", ");
		}
	}

	printf("\n¦�����: ");
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
����2
���̰� 10�� �迭�� ������ �� �� 10���� ������ �Է¹޴´�.
�� Ȧ���� �迭�� �տ��� ���� ä�������� ¦���� �迭�� ���������� ä��������.
��¿���) �� 10���� ������ �Է��Ͻÿ�.
1 2 3 4 5 6 7 8 9 10
��� : 1 3 5 7 9 10 8 6 4 2
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

	printf("10���� ���� �Է�: ");
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

	printf("���: ");
	for (int i = 0; i < len; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");

	return 0;
}

/*
����3
ȸ��(Palindrome)�� �� or �ڿ��� �о ������ �ܾ ���Ѵ�.
noon, level �� ���� �ܾ���� ȸ���� ���Ѵ�.
����ڷκ��� ���ڿ��� �Է¹����� ȸ������ �ƴ��� �Ǵ��ϴ� ���α׷��� �ۼ��Ͻÿ�.
��ҹ��ڱ��� �����ؾ� ȸ������ ������.
��¿���)
�ܾ �Է��Ͻÿ�. : noon
ȸ���Դϴ�.
�ܾ �Է��Ͻÿ�. : love
ȸ���� �ƴմϴ�.
*/
int main1_3(void)
{
	int len = 0;
	char str[] = "";

	printf("�ܾ �Է��Ͻÿ�: ");
	scanf("%s", str);

	while (str[len] != '\0')
	{
		len++;
	}

	for (int i = 0; i < len / 2; i++)
	{
		if (str[i] == str[len - i - 1])
		{
			printf("ȸ���Դϴ�. \n");
			break;
		}
		else
		{
			printf("ȸ���� �ƴմϴ�. \n");
			break;
		}
	}
	return 0;
}