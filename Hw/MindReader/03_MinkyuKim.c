#include <stdio.h>

int main3(void)
{
	char in1, in2;
	int num = 0, guess, min = 1, max = 100;

	printf("1부터 100까지 숫자 중 하나를 고르시오.\n");
	printf("그 숫자가 제시한 숫자보다 높으면 h 또는 H,\n");
	printf("제시한 숫자보다 낮으면 l 또는 L을 누르시오.\n");
	printf("제시한 숫자와 당신이 고른 숫자가 일치하면 y 또는 Y를 누르시오.\n");

	while (1)
	{
		guess = (min + max) / 2;
		printf("%d 입니까? ", guess);

		while (1)
		{
			scanf("%c", &in1);
			if (in1 != 10)
			{
				scanf("%c", &in2);
			}
			if (in1 == 10 || in2 == 10)
			{
				break;
			}
			num++;
		}
		// 입력
		if (num == 0)
		{
			if (in1 == 'l' || in1 == 'L')
			{
				max = guess;
			}
			// 제시 숫자가 높을 때
			else if (in1 == 'h' || in1 == 'H')
			{
				if (guess == 99)
				{
					guess = 100;
				}
				min = guess;
			}
			// 제시 숫자가 낮을 때
			else if (in1 == 'y' || in1 == 'Y')
			{
				printf("훗... 내가 이겼군...\n");
				break;
			}
			// 탈출문
			else
			{
				printf("잘못된 입력입니다.\n");
				num = 0;
				continue;
			}
			// y, l, h 외의 문자 입력시 에러
		}
		if (num != 0)
		{
			printf("잘못된 입력입니다.\n");
			num = 0;
			continue;
		}
		// y, l, h 외의 문자 입력시 에러
		if (in1 == 'y' || in1 == 'Y')
		{
			break;
		}
		// 최종 탈출문
	}

	return 0;
}

