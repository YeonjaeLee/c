#include <stdio.h>

typedef struct student
{
	char name[20];
	char stdnum[20];
	char school[20];
	char major[20];
	int year;
} Student;

void ShowStudentInfo8(Student * sptr)
{
	printf("�л� �̸�: %s \n", sptr->name);
	printf("�л� ������ȣ: %s \n", sptr->stdnum);
	printf("�б� �̸�: %s \n", sptr->school);
	printf("���� ����: %s \n", sptr->major);
	printf("�г�: %d \n", sptr->year);
}

int main8(void)
{
	Student arr[7];
	int i;

	for (i = 0; i < 7; i++)
	{
		printf("�̸�: ");
		scanf("%s", arr[i].name);
		printf("��ȣ: ");
		scanf("%s", arr[i].stdnum);
		printf("�б�: ");
		scanf("%s", arr[i].school);
		printf("����: ");
		scanf("%s", arr[i].major);
		printf("�г�: ");
		scanf("%d", &arr[i].year);
	}

	for (i = 0; i < 7; i++)
	{
		ShowStudentInfo8(&arr[i]);
	}

	return 0;
}