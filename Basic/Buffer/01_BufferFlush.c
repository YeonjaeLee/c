#include <stdio.h>

void ClearLineFromReadBuffer(void)
{
	while (getchar() != '\n');
}

int main1(void)
{
	char perID[7];
	char name[10];

	fputs("�ֹι�ȣ �� 6�ڸ� �Է�: ", stdout);
	fgets(perID, sizeof(perID), stdin);
	ClearLineFromReadBuffer();					//�Է¹��� ����

	fputs("�̸� �Է�: ", stdout);
	fgets(name, sizeof(name), stdin);

	printf("�ֹι�ȣ: %s \n", perID);
	printf("�̸�: %s \n", name);

	return 0;

}


/*
����. Chapter21 - 05, 06
����Ű �Է� ���� �ذ�

1.	���� ���
�ֹι�ȣ �� 6�ڸ� �Է�: 921105
�̸� �Է�: �̿���
�ֹι�ȣ: 921105
�̸�: �̿���

2.	��� ��쿡�� �ֹι�ȣ 6�ڸ��� �Է� ����
�ֹι�ȣ �� 6�ڸ� �Է�: 921105-1122345
�̸� �Է�: �̿���
�ֹι�ȣ: 921105
�̸�: �̿���
*/