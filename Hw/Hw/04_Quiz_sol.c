#include <stdio.h>
#include <stdlib.h>

int main4_2()
{
	int user;
	int com;
	char ans1 = 'q';
	char ans2 = 'q';

	srand((int)time(NULL));

	int num = 0;
	while (1) {

		printf("무엇을 내겠습니까?(1: 가위, 2:바위, 3:보, q:종료) : ");

		while (1) {

			// %c 로 입력을 받을 경우... 입력한 문자수 +1 만큼 루프가 돈다.
			// 1 + Enter, 11 + Enter, 111 + Enter
			scanf("%c", &ans1);
			if (ans1 != 10) {
				scanf("%c", &ans2);
			}
			//printf("ans1 : %d .. ans2 : %d .. num : %d \n", ans1, ans2, num);

			num++;

			if (ans1 == 10 || ans2 == 10) {
				break;
			}
		}

		if (num == 1) {
			if (ans2 == 10) {
				//printf("num : %d \n", num);
				num = 0;
			}
		}
		else {
			printf("잘못 입력하셨습니다. #1 \n\n");
			num = 0;
			continue;
		}

		if (ans1 == 'q' || ans1 == 'Q')
		{
			printf("종료 \n");
			break;
		}

		user = ans1 - 48;
		com = rand() % 3 + 1;

		//=========================승부 판단 부분 =======================================
		if (user == 1 && com == 1) printf("사용자 : %s, 컴퓨터 : %s\n*** 비겼습니다.\n\n", "가위", "가위");
		if (user == 1 && com == 3) printf("사용자 : %s, 컴퓨터 : %s\n*** 이겼습니다.\n\n", "가위", "보");
		if (user == 1 && com == 2) printf("사용자 : %s, 컴퓨터 : %s\n*** 졌습니다.\n\n", "가위", "바위");

		if (user == 2 && com == 1) printf("사용자 : %s, 컴퓨터 : %s\n*** 이겼습니다.\n\n", "바위", "가위");
		if (user == 2 && com == 2) printf("사용자 : %s, 컴퓨터 : %s\n*** 비겼습니다.\n\n", "바위", "바위");
		if (user == 2 && com == 3) printf("사용자 : %s, 컴퓨터 : %s\n*** 졌습니다.\n\n", "바위", "보");

		if (user == 3 && com == 1) printf("사용자 : %s, 컴퓨터 : %s\n*** 졌습니다.\n\n", "보", "가위");
		if (user == 3 && com == 2) printf("사용자 : %s, 컴퓨터 : %s\n*** 이겼습니다.\n\n", "보", "바위");
		if (user == 3 && com == 3) printf("사용자 : %s, 컴퓨터 : %s\n*** 비겼습니다.\n\n", "보", "보");

		if (user != 1 && user != 2 && user != 3)
		{
			printf("잘못 입력하셨습니다. #2 \n\n");
			num = 0;
		}
	}
}

