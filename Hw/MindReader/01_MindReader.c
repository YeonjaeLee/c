#include <stdio.h>

/*
Mind Reader

���Ӽ��� :
���� ������ ���ڸ� ��ǻ�Ͱ� �����.
���� ������ ���ں��� ũ�� h ��� �Է��Ѵ�.
���� ������ ���ں��� ������ l �̶�� �Է��Ѵ�.
���� ������  ���ڿ� ������ y ��� �Է��Ѵ�.
*/

int main(void)
{
	int com, count = 0;
	char user1, user2;

	srand((int)time(NULL));

	printf("pick a number between 1 and 100 \n");
	printf("if the number is higher than the guess press h \n");
	printf("if it is less than the guess press l \n");
	printf("if my guess is correct press y \n");
	
	while (1)
	{
		com = rand() % 100 + 1;
		printf("is it %d? \n", com);

		while (1)
		{
			scanf("%c", &user1);

			if (count == 0) {
				if (user1 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n\n");
					printf("is it %d? \n", com);
					continue;
				}
			}
			else
			{
				if (user1 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n\n");
					printf("is it %d? \n", com);
					count = 0;
					continue;
				}
			}
			
			scanf("%c", &user2);
			count++;

			if (count == 1)
			{
				if ((int)user1 == 121)		//y
				{
					if ((int)user2 == 10)
					{
						printf("\n");
						printf("You are not good enough to beat me, human \n");
						exit();
					}
				}
				else if ((int)user1 == 104)		//h
				{
					if ((int)user2 == 10)
					{
						printf("\n");
						count = 0;
						break;
					}
				}
				else if ((int)user1 == 108)		//l
				{
					if ((int)user2 == 10)
					{
						printf("\n");
						count = 0;
						break;
					}
				}
				else
				{
					if (user2 == 10)
					{
						printf("�߸��Է��ϼ̽��ϴ�. \n\n");
						printf("is it %d? \n", com);
						count = 0;
						continue;
					}
				}
			}
			else
			{
				if (user2 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n\n");
					printf("is it %d? \n", com);
					count = 0;
					continue;
				}
			}
		}
	}
	return 0;
}