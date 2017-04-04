#include <stdio.h>

/*
�߱����� =
1. �ߺ����� �ʴ� 3���� ������ �����Ѵ�. (1 ~ 9)
2. ����ڴ� 3���� ���ڸ� �Է��Ѵ�.
3. ������ 3���� ���ڸ� ���ߴµ� ��ġ���� ��Ȯ�� ����� �Ѵ�.���ڿ� ������ ��ġ���� ��ġ�ϸ� strike �� �����Ѵ�.
4. ���ڴ� ������ ��ġ�� Ʋ�ȴٸ� ball�� �����Ѵ�.
5. ����3���� ��� ��ġ���� ������  out���� �����Ѵ�.
6. 3 strike �� �Ǹ� ������ ����ȴ�.
7. �õ��� Ƚ���� ǥ���Ѵ�.
*/

int NumOX(int user[], int len)
{
	int ox = 0;

	for (int i = 0; i < len; i++)
	{
		if (user[i] < 1 || user[i] > 9)
			ox++;
	}

	if (ox > 0)
		return 0;
	else
		return 1;
}

int main(void)
{
	int num[50], user[50];
	char temp[] = "";
	int len = 0;
	int strike = 0, ball = 0, count = 0;
	int tf = 0, ox = 0;

	srand((int)time(NULL));

	// 3���� �ߺ�x �� ����
	num[0] = rand() % 9 + 1;
	do
	{
		num[1] = rand() % 9 + 1;
	} while (num[0] == num[1]);

	do
	{
		num[2] = rand() % 9 + 1;
	} while (num[2] == num[1] || num[2] == num[0]);

	printf("<<�߱�����>>\n");
	printf("1 - 9 ������ ���ڸ� ���ڸ� �Է��ϼ���. \n\n");

	printf("��ǻ�� ����: %d%d%d \n", num[0], num[1], num[2]);

	while (1)
	{
		count++;

		// 3���� ���� �Է�
		printf("���ڸ� �Է��ϼ���.(%dȸ)\t", count);
		scanf("%s", temp);

		while (temp[len] != '\0')
		{
			len++;
		}

		if (len != 3)
		{
			printf("�ٽ� �Է����ּ���. \n\n");
			len = 0;
			count--;
			continue;
		}
		

		for (int i = 0; i < len; i++)
		{
			user[i] = temp[i] - 48;
		}
	
		// �Է� ���� 1 - 9 Ȯ��. (ox == 1): true, (ox == 0): false
		ox = NumOX(user, len);

		if (ox == 1)
		{
			// �Է� ���� �ߺ� Ȯ��
			for (int i = 0; i < len - 1; i++)
			{
				for (int j = i + 1; j < len; j++)
				{
					if (user[i] == user[j])
					{
						tf++;
					}
				}
			}

			if (tf > 0)
			{
				tf = 0;
				printf("�ߺ��� ���ڰ� �ֽ��ϴ�. �ٽ� �Է����ּ���. \n\n");
				len = 0;
				count--;
				continue;
			}

			// strike, ball ���
			for (int i = 0; i < len; i++)
			{
				for (int j = 0; j < len; j++)
				{
					if (num[i] == user[j])
					{
						if (i == j)
						{
							strike++;
						}
						else
						{
							ball++;
						}
					}
				}
			}
			if (strike == 0 && ball == 0)
			{
				printf("OUT!!! \n\n");
			}
			else if (strike == 3)
			{
				printf("HOME RUN!!! \n\n");
			}
			else
			{
				printf("%d strike\t %d ball \n\n", strike, ball);
			}

			if (strike == len)
			{
				printf("YOU WIN!!!\n");
				break;
			}
			strike = 0;
			ball = 0;
		}
		else
		{
			printf("�ٽ� �Է����ּ���.  \n\n");
			len = 0;
			count--;
			continue;
		}	
	}
	return 0;

}