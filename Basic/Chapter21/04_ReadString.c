#include <stdio.h>

int main4(void)
{
	char str[7];
	int i;

	for (i = 0; i < 3; i++)
	{
		fgets(str, sizeof(str), stdin);
		printf("Read %d: %s \n", i + 1, str);
	}
	return 0;
}

/*
���ڿ� �Է� �޾� ���ϴ� ���� ��ŭ ���� �б�
1.	fgets �ִ� 6 ���� ���
	12345678901234567890
	Read 1: 123456
	Read 2: 789012
	Read 3: 345678
2.	���� Ű�� �Էµ� ���ڿ��� �Ϻη� �޾� ����
	We ����
	Read 1: We

	like ����
	Read 2: like

	you ����
	Read 3: you
3.	������ �����ϴ� ���ڿ��� �о� ����
	Y & I ����
	Read 1: Y & I

	ha ha ����
	Read 2: ha ha

	^^ -- ����
	Read 3: ^^ --
*/