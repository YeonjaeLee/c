#include <stdio.h>

int main5(void)
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);

	for (int i = 0; i < 10; i++)
	{
		printf("%d \n", perID[i]);
	}
	printf("\n\n\n");
	// Enter ���� ���� ���ȵǰ� �ִ� ��Ȳ
	// "�̸� �Է�: "�� �Ѿ����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;

}

/*
1.	���� Ű�� ���Ƽ� ����
�ֹι�ȣ �� 6�ڸ� �Է�: 921105
�̸� �Է�: �ֹι�ȣ: 921105
�̸�:

2.	�� �ȵ�� �Է�
�ֹι�ȣ �� 6�ڸ� �Է�: 921105-1122345
�̸� �Է�: �ֹι�ȣ: 921105
�̸�: -1122345
*/