#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

/*
배열 출력
*/

int main(void)
{
	int count = 0;
	int randnum, user;
	char arr[][60] = {" "};

	srand((int)time(NULL));

	printf("사용자 수: ");
	scanf("%d", &user);

	for (int i = 0; i < user; i++)
	{
		printf("%d번째 사용자 이름을 입력하시오: ", i + 1);
		scanf("%s", arr[i][0]);
		arr[i][1] = ":";
		arr[i][2] = ">";
	}

	printf("시작하려면 아무 키나 누르십시오 . . .\n\n");

	while (1)
	{
		if (kbhit())
		{
			for (int i = 0; i < user; i++)
			{
				for (int j = 0; j < 60; j++)
				{
					printf("%s", arr[i][j]);
				}
			}

			/*while (1)
			{
				randnum = rand() % 3;
				Sleep(100);
				if (randnum == 1)
				{
					count++;
					printf("\b\b :>");
					if (count == 60)
					{
						printf("\n");
						exit(0);
					}
				}
			}*/
		}
	}

	return 0;
}