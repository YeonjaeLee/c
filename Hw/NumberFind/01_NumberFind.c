#include <stdio.h>

/*
����ã��

1.���ڿ͹��ڸ� �������� �Է¹޴´�. > 123abc654ijuyh
2.���߿� ���ڸ� ã�Ƴ���.
3.ã�Ƴ� ������ ���� ���ؼ� ����Ѵ�.

ASCII�ڵ�ǥ�� Ȱ���Ͽ� ������ �ذ��Ѵ�.
���࿹)
�������������Է� : ab12
�Է� ���� ���ڿ� ab12
a->����
b->����
1->����
2->����
������ �� : 3
*/

int main(void)
{
	char input[50] = "";
	char* ptr = input;
	int len = 0, sum = 0;

	printf("�������������Է�: ");
	scanf("%s", &input);
	printf("�Է� ���� ���ڿ� ");
	printf("%s \n", input);

	while (input[len] != '\0')
	{
		printf("%c -> ", input[len]);

		if (input[len] > 47 && input[len] < 58)
		{
			sum = sum + input[len] - 48;
			printf("���� \n");
		}
		else
		{
			printf("���� \n");
		}
		len++;
	}

	printf("������ ��: %d \n", sum);

	return 0;
}