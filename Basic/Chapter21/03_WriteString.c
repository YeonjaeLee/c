#include <stdio.h>

int main3(void)
{
	char * str = "Simple String";

	printf("1. puts test ------ \n");
	puts(str);
	puts("So Simple String");

	printf("2. fputs test ----- \n");
	fputs(str, stdout);
	printf("\n");
	fputs("So Simple String", stdout);
	printf("\n");

	printf("3. end of main ---- \n");

	return 0;
}


/*
puts �Լ� �ڵ� ����
fputs �ڵ� ���� ���� �ʴ´�
*/