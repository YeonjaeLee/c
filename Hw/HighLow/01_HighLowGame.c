#include <stdio.h>

/*
���̷ο� ���� �����

���Ӽ��� :
1. ��ǻ�Ͱ� �� ���ڸ� �����.
2. ��ȸ�� 6ȸ �־�����. (5ȸ�� �ϸ� ���̵� ���)
3. ���ڸ� ���߰ų� ��ȸ�� �� �����ϸ� �ٽ� ��  ���ΰ��� �����.
*/

int main(void)
{
	int com, user;
	int count = 6;
	char replay1 = 'n', replay2 = 'n';
	int num = 0;

	srand((int)time(NULL));
	com = rand() % 101;

	printf("���� ���� 0 ���� 100 ������ �� �߿� �ϳ��� �����ϰڽ��ϴ�. \n");
	printf("����� �� ���ڸ� 6ȸ�ȿ� ���߽ø� �˴ϴ�.. \n\n");

	while (1)
	{
		if (count == 0)
		{
			printf("High / Low ������ �÷����� �ּż� �����մϴ�. \n");
			printf("�ٽ��Ͻðڽ��ϱ�? (y/n)... ");
/*
����
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@			
*/
			scanf(" %c", &replay1);

			if (replay1 == 'y')
			{
				main();
			}
			else if (replay1 == 'n')
			{
				printf("���� \n");
				exit();
			}
			else
			{
				printf("�߸� �Է��ϼ̽��ϴ�. \n");
				continue;
			}


/*
����x
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
			//while (1)
			//{
			//	scanf("%c", &replay1);
			//	if (num == 0)
			//	{
			//		if ((int)replay1 == 10)
			//		{
			//			printf("�߸��Է��ϼ̽��ϴ�. \n");
			//			printf("�ٽ��Ͻðڽ��ϱ�? (y/n)... ");
			//			continue;
			//		}
			//		else if (replay1 == 'n')
			//		{
			//			break;
			//		}
			//	}
			//	else
			//	{
			//		if ((int)replay1 == 10)
			//		{
			//			printf("�߸��Է��ϼ̽��ϴ�. \n");
			//			printf("�ٽ��Ͻðڽ��ϱ�? (y/n)... ");
			//			num = 0;
			//			continue;
			//		}
			//		else if (replay1 == 'n')
			//		{
			//			break;
			//		}
			//	}
			//	scanf("%c", &replay2);

			//	//printf("count: %d \n", count);
			//	//printf("i1: %d, i2: %d \n", i1, i2);
			//	if (num == 0)
			//	{
			//		if ((int)replay2 == 10)
			//		{
			//			break;
			//		}
			//		else
			//		{
			//			num++;
			//		}
			//	}
			//	else
			//	{
			//		if ((int)replay1 == 10 || (int)replay2 == 10)
			//		{
			//			printf("�߸��Է��ϼ̽��ϴ�. \n");
			//			printf("�ٽ��Ͻðڽ��ϱ�? (y/n)... ");
			//			num = 0;
			//			continue;
			//		}
			//		else
			//		{
			//			num++;
			//		}
			//	}

			//}
			//if (replay1 == 'n')
			//{
			//	printf("���� \n");
			//	break;
			//}
/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
		}
		


		printf("���̶�� �����մϱ�? (0 to 100) \t");
		scanf("%d", &user);
		if (user > com)
		{
			count--;
			printf("%d �� ���� ���� ���ں��� Ů�ϴ�. \n", user);
			printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�. \n\n", count);
		}
		else if (user == com)
		{
			printf("%d �� �����Դϴ�. �����մϴ�! \n\n", user);
			count = 0;
		}
		else
		{
			count--;
			printf("%d �� ���� ���� ���ں��� �۽��ϴ�. \n", user);
			printf("[ %d ]�� ��ȸ�� ���ҽ��ϴ�. \n\n", count);
		}
	}

	return 0;

}