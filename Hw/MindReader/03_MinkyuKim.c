#include <stdio.h>

int main3(void)
{
	char in1, in2;
	int num = 0, guess, min = 1, max = 100;

	printf("1���� 100���� ���� �� �ϳ��� ���ÿ�.\n");
	printf("�� ���ڰ� ������ ���ں��� ������ h �Ǵ� H,\n");
	printf("������ ���ں��� ������ l �Ǵ� L�� �����ÿ�.\n");
	printf("������ ���ڿ� ����� �� ���ڰ� ��ġ�ϸ� y �Ǵ� Y�� �����ÿ�.\n");

	while (1)
	{
		guess = (min + max) / 2;
		printf("%d �Դϱ�? ", guess);

		while (1)
		{
			scanf("%c", &in1);
			if (in1 != 10)
			{
				scanf("%c", &in2);
			}
			if (in1 == 10 || in2 == 10)
			{
				break;
			}
			num++;
		}
		// �Է�
		if (num == 0)
		{
			if (in1 == 'l' || in1 == 'L')
			{
				max = guess;
			}
			// ���� ���ڰ� ���� ��
			else if (in1 == 'h' || in1 == 'H')
			{
				if (guess == 99)
				{
					guess = 100;
				}
				min = guess;
			}
			// ���� ���ڰ� ���� ��
			else if (in1 == 'y' || in1 == 'Y')
			{
				printf("��... ���� �̰屺...\n");
				break;
			}
			// Ż�⹮
			else
			{
				printf("�߸��� �Է��Դϴ�.\n");
				num = 0;
				continue;
			}
			// y, l, h ���� ���� �Է½� ����
		}
		if (num != 0)
		{
			printf("�߸��� �Է��Դϴ�.\n");
			num = 0;
			continue;
		}
		// y, l, h ���� ���� �Է½� ����
		if (in1 == 'y' || in1 == 'Y')
		{
			break;
		}
		// ���� Ż�⹮
	}

	return 0;
}

