#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

int main4_1()
{
	int com, input;
	int result;
	int count = 0, one = 0;
	char i1, i2;

	while (1)
	{
		printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");

		while (1)
		{
			scanf("%c", &i1);
			if (count == 0)
			{
				if ((int)i1 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n");
					printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");
					continue;
				}
				else if (i1 == 'q' || i1 == 'Q')
				{
					break;
				}
			}
			else
			{
				if ((int)i1 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n");
					printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");
					count = 0;
					continue;
				}
				else if (i1 == 'q' || i1 == 'Q')
				{
					break;
				}
			}
			scanf("%c", &i2);

			//printf("count: %d \n", count);
			//printf("i1: %d, i2: %d \n", i1, i2);
			if (count == 0)
			{
				if ((int)i2 == 10)
				{
					break;
				}
				else
				{
					count++;
				}
			}
			else
			{
				if ((int)i1 == 10 || (int)i2 == 10)
				{
					printf("�߸��Է��ϼ̽��ϴ�. \n");
					printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");
					count = 0;
					continue;
				}
				else
				{
					count++;
				}
			}

		}

		if (i1 == 'q' || i1 == 'Q')
		{
			printf("���� \n");
			break;
		}
		else
		{
			input = (int)i1 - 48;

			switch (i1)
			{
			case '1':
				printf("����� : ����");
				break;
			case '2':
				printf("����� : ����");
				break;
			case '3':
				printf("����� : ��");
				break;
			default:
				printf("�߸� �Է��ϼ̽��ϴ�. \n");
				continue;
			}

			srand((int)time(NULL));
			com = rand() % 3 + 1;
			result = input - com;

			switch (com)
			{
			case 1:
				printf(",  ��ǻ�� : ����");
				break;
			case 2:
				printf(",  ��ǻ�� : ����");
				break;
			case 3:
				printf(",  ��ǻ�� : ��");
				break;
			}

			if (result == 1 || result == -2)
			{
				printf("\n�̰���ϴ�. \n");
			}
			else if (result == 0)
			{
				printf("\n�����ϴ�. \n");
			}
			else
			{
				printf("\n�����ϴ�. \n");
			}

		}

	}
	return 0;
}



//int main4_1()
//{
//	int com, input;
//	int result;
//	int count = 0, one = 0;
//	char i1,i2;
//
//	while(1)
//	{
//		printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");
//
//		while (1)
//		{
//			// %c �� �Է��� ���� ���... �Է��� ���ڼ� +1 ��ŭ ������ ����.
//			// 1 + Enter, 11 + Enter, 111 + Enter
//			scanf("%c", &i1);
//
//			if (i1 != 10) {
//				scanf("%c", &i2);
//			}
//
//			count++;
//
//			if (i1 == 10 || i2 == 10) 
//			{
//				break;
//			}
//		}
//
//		if (count == 1)
//		{
//			if (i2 == 10) 
//			{
//				//printf("num : %d \n", num);
//				count = 0;
//			}
//		}
//		else 
//		{
//			printf("�߸� �Է��ϼ̽��ϴ�. \n\n");
//			count = 0;
//			continue;
//		}
//	
//		if (i1 == 'q' || i1 == 'Q')
//		{
//			printf("���� \n");
//			break;
//		}
//		else
//		{
//			input = (int)i1 - 48;
//
//			switch (i1)
//			{
//			case '1':
//				printf("����� : ����");
//				break;
//			case '2':
//				printf("����� : ����");
//				break;
//			case '3':
//				printf("����� : ��");
//				break;
//			default:
//				printf("�߸� �Է��ϼ̽��ϴ�. \n");
//				continue;
//			}
//
//			srand((int)time(NULL));
//			com = rand() % 3 + 1;
//			result = input - com;
//
//			switch (com)
//			{
//			case 1:
//				printf(",  ��ǻ�� : ����");
//				break;
//			case 2:
//				printf(",  ��ǻ�� : ����");
//				break;
//			case 3:
//				printf(",  ��ǻ�� : ��");
//					break;
//			}
//			if (result == 1 || result == -2)
//			{
//				printf("\n�̰���ϴ�. \n\n");
//			}
//			else if (result == 0)
//			{
//				printf("\n�����ϴ�. \n\n");
//			}
//			else
//			{
//				printf("\n�����ϴ�. \n\n");
//			}
//		}
//	}
//	return 0;
//}



