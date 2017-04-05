#include <stdio.h>

/*
숫자찾기

1.숫자와문자를 무작위로 입력받는다. > 123abc654ijuyh
2.이중에 숫자만 찾아낸다.
3.찾아낸 숫자의 합을 구해서 출력한다.

ASCII코드표를 활용하여 문제를 해결한다.
실행예)
정수형데이터입력 : ab12
입력 받은 문자열 ab12
a->문자
b->문자
1->숫자
2->숫자
숫자의 합 : 3
*/

int main(void)
{
	char input[50] = "";
	char* ptr = input;
	int len = 0, sum = 0;

	printf("정수형데이터입력: ");
	scanf("%s", &input);
	printf("입력 받은 문자열 ");
	printf("%s \n", input);

	while (input[len] != '\0')
	{
		printf("%c -> ", input[len]);

		if (input[len] > 47 && input[len] < 58)
		{
			sum = sum + input[len] - 48;
			printf("숫자 \n");
		}
		else
		{
			printf("문자 \n");
		}
		len++;
	}

	printf("숫자의 합: %d \n", sum);

	return 0;
}