#include <stdio.h>

int main9(void)
{
	char sel;
	printf("M ����, A ����, E ���� \n");
	printf("�Է�: ");
	scanf("%c", &sel);

	switch (sel)
	{
	case 'M':
	case 'm':
		printf("Morning \n");
		break;
	case 'A':
	case 'a':
		printf("Afternoon \n");
		break;
	case 'E':
	case 'e':
		printf("Evening \n");
		break;
	}

	return 0;

}