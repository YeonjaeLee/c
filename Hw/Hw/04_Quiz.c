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
		printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");

		while (1)
		{
			scanf("%c", &i1);
			if (count == 0)
			{
				if ((int)i1 == 10)
				{
					printf("잘못입력하셨습니다. \n");
					printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");
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
					printf("잘못입력하셨습니다. \n");
					printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");
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
					printf("잘못입력하셨습니다. \n");
					printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");
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
			printf("종료 \n");
			break;
		}
		else
		{
			input = (int)i1 - 48;

			switch (i1)
			{
			case '1':
				printf("사용자 : 가위");
				break;
			case '2':
				printf("사용자 : 바위");
				break;
			case '3':
				printf("사용자 : 보");
				break;
			default:
				printf("잘못 입력하셨습니다. \n");
				continue;
			}

			srand((int)time(NULL));
			com = rand() % 3 + 1;
			result = input - com;

			switch (com)
			{
			case 1:
				printf(",  컴퓨터 : 가위");
				break;
			case 2:
				printf(",  컴퓨터 : 바위");
				break;
			case 3:
				printf(",  컴퓨터 : 보");
				break;
			}

			if (result == 1 || result == -2)
			{
				printf("\n이겼습니다. \n");
			}
			else if (result == 0)
			{
				printf("\n비겼습니다. \n");
			}
			else
			{
				printf("\n졌습니다. \n");
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
//		printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");
//
//		while (1)
//		{
//			// %c 로 입력을 받을 경우... 입력한 문자수 +1 만큼 루프가 돈다.
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
//			printf("잘못 입력하셨습니다. \n\n");
//			count = 0;
//			continue;
//		}
//	
//		if (i1 == 'q' || i1 == 'Q')
//		{
//			printf("종료 \n");
//			break;
//		}
//		else
//		{
//			input = (int)i1 - 48;
//
//			switch (i1)
//			{
//			case '1':
//				printf("사용자 : 가위");
//				break;
//			case '2':
//				printf("사용자 : 바위");
//				break;
//			case '3':
//				printf("사용자 : 보");
//				break;
//			default:
//				printf("잘못 입력하셨습니다. \n");
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
//				printf(",  컴퓨터 : 가위");
//				break;
//			case 2:
//				printf(",  컴퓨터 : 바위");
//				break;
//			case 3:
//				printf(",  컴퓨터 : 보");
//					break;
//			}
//			if (result == 1 || result == -2)
//			{
//				printf("\n이겼습니다. \n\n");
//			}
//			else if (result == 0)
//			{
//				printf("\n비겼습니다. \n\n");
//			}
//			else
//			{
//				printf("\n졌습니다. \n\n");
//			}
//		}
//	}
//	return 0;
//}



