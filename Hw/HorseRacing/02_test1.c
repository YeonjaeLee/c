#include <stdio.h>
#include <conio.h>
#include <windows.h>

int main2(void)
{
	int count = 0;

	printf("�����Ϸ��� �ƹ� Ű�� �����ʽÿ� . . .\n\n");
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