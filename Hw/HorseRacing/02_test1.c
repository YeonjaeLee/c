#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main2(void)
{
	int count = 0;

	printf("시작하려면 아무 키나 누르십시오 . . .\n\n");
	printf(":>");

	while (1)
	{
		if (kbhit())
		{
			while (1)
			{
				Sleep(100);
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

	return 0;
}