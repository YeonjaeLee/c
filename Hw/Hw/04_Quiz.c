#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

/*
���������� ���� �����

���Ӽ��� :
1. 1,2,3�� �ϳ��� ���ڸ� ������ �����Ѵ�.
2. ����ڰ� ����(1), ����(2), ��(3) �� �ϳ��� ����.
3. �ºθ� �Ǵ��Ͽ� ����Ѵ�.
4. 1, 2, 3 �̿��� ���ڸ� �Է��ϸ� �߸��� �Է��� �˷��ش�.
5. q, Q  �� �Է��ϸ� �����մϴ�.
*/

int main()
{
	int com, input;
	int result;
	char i;

	while(1)
	{
		printf("������ ���ڽ��ϱ�?(1: ����, 2:����, 3:��) : ");
		scanf(" %c", &i);
		

		if (i == 'q' || i == 'Q')
		{
			printf("���� \n");
			break;
		}
		else
		{
			input = (int)i - 48;

			switch (i)
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