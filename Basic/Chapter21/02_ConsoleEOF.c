#include <stdio.h>

int main2(void)
{
	int ch;

	while (1)
	{
		ch = getchar();
		if (ch == EOF)
		{
			break;
		}
		putchar(ch);
	}
	return 0;

}

/*
�ܼ� ����� fgetc, getchar �Լ� ȣ��� EOF(�������ǳ�)�� ��ȯ�ϴ� ���
- �Լ�ȣ���� ����
- Windows���� Ctrl + Z Ű, Linux���� Ctrl + D Ű�� �Է��� �Ǵ� ���
*/