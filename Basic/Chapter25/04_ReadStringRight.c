#include <stdio.h>

char * ReadUserName4(void)
{
	char * name = (char *)malloc(sizeof(char) * 30);
	printf("What's your name? ");
	gets(name);

	return name;
}

int main4(void)
{
	char * name1;
	char * name2;

	name1 = ReadUserName4();
	printf("name1: %s \n", name1);

	name2 = ReadUserName4();
	printf("name2: %s \n", name2);

	printf("again name1: %s \n", name1);
	printf("again name2: %s \n", name2);

	return 0;
}

/*
What's your name? Yoon Sung Woo
name1: Yoon Sung Woo
What's your name? Hong Sook Jin
name2: Hong Sook Jin
again name1: Yoon Sung Woo
again name2: Hong Sook Jin
*/