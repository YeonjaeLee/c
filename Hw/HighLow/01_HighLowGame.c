#include <stdio.h>

/*
하이로우 게임 만들기

게임설명 :
1. 컴퓨터가 낸 숫자를 맞춘다.
2. 기회는 6회 주어진다. (5회로 하면 난이도 상승)
3. 숫자를 맞추거나 기회를 다 소진하면 다시 할  것인가를 물어본다.
*/

int main1(void)
{
	int com, user;
	int count = 6;
	char replay1 = 'a', replay2 = 'a';
	int num = 0;

	srand((int)time(NULL));
	com = rand() % 101;

	printf("나는 지금 0 부터 100 사이의 값 중에 하나를 생각하겠습니다. \n");
	printf("당신은 그 숫자를 6회안에 맞추시면 됩니다.. \n\n");

	while (1)
	{
		if (count == 0)
		{
			printf("High / Low 게임을 플레이해 주셔서 감사합니다. \n");
			printf("다시하시겠습니까? (y/n)... ");
/*
오류
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@			
*/
			//scanf(" %c", &replay1);

			//if (replay1 == 'y')
			//{
			//	main();
			//}
			//else if (replay1 == 'n')
			//{
			//	printf("종료 \n");
			//	exit();
			//}
			//else
			//{
			//	printf("잘못 입력하셨습니다. \n\n");
			//	continue;
			//}


/*
오류x
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
			while (1)
			{
				scanf("%c", &replay1);
//				printf("replay1: %d, replay2: %d \n", replay1, replay2);

				if ((int)replay1 == 10)
				{
					if ((int)replay2 == 110)
					{
						printf("종료 \n");
						exit();
					}
					else if ((int)replay2 == 121)
					{
						count = 6;
						main();
					}
					else if ((int)replay2 == 97)
					{

					}
					else
					{
						printf("잘못입력하셨습니다. \n\n");
						printf("다시하시겠습니까? (y/n)... ");
						num = 0;
						continue;
					}
				}

				scanf("%c", &replay2);

				num++;
//				printf("num: %d \n", num);
//				printf("replay1: %d, replay2: %d \n", replay1, replay2);

				if (num == 1)
				{
					if ((int)replay1 == 10)
					{
						if ((int)replay2 == 10)
						{
							printf("잘못입력하셨습니다. \n\n");
							printf("다시하시겠습니까? (y/n)... ");
							num = 0;
							continue;
						}
						else if ((int)replay2 == 110)	//n
						{
							printf("종료 \n");
							exit();
						}
						else if ((int)replay2 == 121)	// y
						{
							count = 6;
							main();
						}
					}
					else if ((int)replay1 == 110)
					{
						if ((int)replay2 == 10)
						{
							printf("종료 \n");
							exit();
						}
						else
						{
							printf("잘못입력하셨습니다. \n\n");
							printf("다시하시겠습니까? (y/n)... ");
							num = 0;
							continue;
						}
						
					}
					else if ((int)replay1 == 121)
					{
						if ((int)replay2 == 10)
						{
							count = 6;
							main();
						}
						else
						{
							printf("잘못입력하셨습니다. \n\n");
							printf("다시하시겠습니까? (y/n)... ");
							num = 0;
							continue;
						}
					}
				}
				else
				{
					printf("잘못입력하셨습니다. \n\n");
					printf("다시하시겠습니까? (y/n)... ");
					num = 0;
					continue;
				}
				

				

				/*if (num == 0)
				{
					if ((int)replay2 == 10)
					{
						break;
					}
					else
					{
						num++;
					}
				}
				else
				{
					if ((int)replay1 == 10 || (int)replay2 == 10)
					{
						printf("잘못입력하셨습니다. \n");
						printf("다시하시겠습니까? (y/n)... ");
						num = 0;
						continue;
					}
					else
					{
						num++;
					}
				}*/

			}
			if (replay1 == 'n')
			{
				printf("종료 \n");
				break;
			}

/*
@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
*/
		}
		else
		{
			printf("몇이라고 생각합니까? (0 to 100) \t");
			scanf("%d", &user);
			if (user > com)
			{
				count--;
				printf("%d 는 제가 정한 숫자보다 큽니다. \n", user);
				printf("[ %d ]의 기회가 남았습니다. \n\n", count);
			}
			else if (user == com)
			{
				printf("%d 는 정답입니다. 축하합니다! \n\n", user);
				count = 0;
			}
			else
			{
				count--;
				printf("%d 는 제가 정한 숫자보다 작습니다. \n", user);
				printf("[ %d ]의 기회가 남았습니다. \n\n", count);
			}
		}

	}

	return 0;

}