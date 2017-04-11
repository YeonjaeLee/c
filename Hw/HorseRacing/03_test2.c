#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <stdlib.h>
#include <time.h>

int main3(void)
{
	int count = 0;
	int num;

	srand((int)time(NULL));

	printf("시작하려면 아무 키나 누르십시오 . . .\n\n");

	printf(":>");

	while (1)
	{
		if (kbhit())
		{
			while (1)
			{
				num = rand() % 3;
				Sleep(100);
				if (num == 1)
				{
					count++;
					printf("\b\b :>");
					if (count == 60)
					{
						printf("\n");
						exit(0);
					}
				}
			}
		}
	}

	return 0;
}