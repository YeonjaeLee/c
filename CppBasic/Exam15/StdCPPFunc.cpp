#include <iostream>
#include <cmath>
#include <cstring>

using namespace std;

int main(void)
{
	char str1[] = "Result";
	char str2[30];

	strcpy(str2, str1);

	printf("%s: %f \n", str1, sin(0.14));
	printf("%s: %f \n", str2, abs(-1.25));

	return 0;
}

/*
��������� Ȯ������ .h�� �����ϰ� �տ� c�� ���̸�
C�� �����ϴ� C++�� ������� �̸��� �ȴ�.

5���� : C�� ǥ�ؿ� ���ǵ� �Լ��� ���� �̸����� std �ȿ� ������ �Ǿ� �־ �� ������ �ʿ��Ѵ�.

C++�� ����� �����ؾ� �ϴ� ����
- ���� �������� ȣȯ���� ���� C������ �Լ�ȣ���� ����ϴ� ��
- C++ ǥ�� ���̺귯������ �����ϴ� �Լ����� C ǥ�� ���̺귯���� �����ϴ� �Լ����� �����ε��ϰ� �ִ�.

int abs(int num);

long abs(long num);
float abs(float num);
double abs(double num);
*/