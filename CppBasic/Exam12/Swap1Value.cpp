#include <iostream>

using namespace std;

void SwapByValue(int val1, int val2)
{
	int temp = val1;
	val1 = val2;
	val2 = temp;
}

int main1(void)
{
	int val1 = 10;
	int val2 = 20;

	SwapByValue(val1, val2);

	cout << "val1: " << val1 << endl;
	cout << "val2: " << val2 << endl;

	return 0;
}

/*
Call-by-value�� ���·� ���ǵ� �Լ��� ���ο�����, �Լ��ܺο� ����� ������ ������ �Ұ����ϴ�.
- SwapByValue�� ���޵� ���ڴ� SwapByValue�� ���������̴�.
*/