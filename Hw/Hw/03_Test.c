#include <stdio.h>

//main3()
//{
//	int s;
//	s = 85;
//
//	if (90 <= s <= 100)
//		printf("A");
//	if (80 <= s < 90)
//		printf("B");
//	if (70 <= s < 80)
//		printf("C");
//	if (60 <= s < 70)
//		printf("D");
//	if (s < 60)
//		printf("F");
//	printf("\n stop");
//}

/*
����

90 <= s <= 100 ǥ���� s >= 90 && s <= 100 ���� ǥ��

*/


main3()
{
	int s;
	s = 85;

	if (s >= 90 && s <= 100)
		printf("A");
	else if (s >= 80)
		printf("B");
	else if (s >= 70)
		printf("C");
	else if (s >= 60)
		printf("D");
	else
		printf("F");
	printf("\n stop");
}