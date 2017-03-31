//#include <stdio.h>
//
//int main(void)
//{
//	int i;
//	char ch;
//
//	printf("입력 : ");
//	scanf("%d", &i);
//
//	printf("%d", i);
//
//
//	return 0;
//}
//
////Q 858993460
////q 858993460



#include <stdio.h>
#include <stdlib.h>     // srand(), rand()
#include <time.h>       // time()

/*
가위바위보 게임 만들기

게임설명 :
1. 1,2,3중 하나의 숫자를 난수로 생성한다.
2. 사용자가 가위(1), 바위(2), 보(3) 중 하나를 낸다.
3. 승부를 판단하여 출력한다.
4. 1, 2, 3 이외의 숫자를 입력하면 잘못된 입력을 알려준다.
5. q, Q  를 입력하면 종료합니다.
*/

int main5()
{
	int i, com, input;
	int result;

	while (1)
	{
		printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보) : ");
		scanf("%d", &i);
		input = i;
		printf("%d \n", i);

		//if (i < 0)
		//{
		//	printf("종료 \n");
		//	exit(0);
		//}
		//else
		//{
			//printf("!!!!!!!!!!\n");
			switch (input)
			{
			case 1:
				printf("사용자 : 가위");
				break;
			case 2:
				printf("사용자 : 바위");
				break;
			case 3:
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
		//}

	}
	return 0;
}