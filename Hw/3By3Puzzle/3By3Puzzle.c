#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <Windows.h>
#include <conio.h>

int get_directionkey()//방향키를 입력받는 함수
{
	int key;
	key = _getch();
	if (key == 224)//방향키
	{
		return _getch(); //어떤 방향 키인지 반환
	}
	return 0;	//방향키가 아님
}

int win(int arr[3][3])
{
	int count = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (arr[i][j] != count)
			{
				return -1;
			}
			else
			{
				if (count == 8)
				{
					return 1;
				}
				else
				{
					count++;
				}
			}
		}
	}
}

int main(void)
{
	int arr[3][3] = { 0 };
	int arnum1, arnum2, num = 1;
	int xpos = 2, ypos = 2;
	int key, winer = 0;
	srand((int)time(NULL));

	while (1)
	{
		arnum1 = rand() % 3;
		arnum2 = rand() % 3;
		if (arnum1 == 2 && arnum2 == 2)
		{
			continue;
		}
		if (arr[arnum1][arnum2] == 0)
		{
			arr[arnum1][arnum2] = num;
			num++;
		}
		else
		{
			if (num == 9)
			{
				break;
			}
		}
	}

// win 확인
	/*int a = 1;
	for (int i = 0; i < 3; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			if (i == 2 && j == 2)
			{
				arr[i][j] = 0;
			}
			else
			{
				arr[i][j] = a++;
			}
		}
	}
	arr[2][1] = 0;
	arr[2][2] = 8;
	xpos = 2;
	ypos = 1;
	*/
//
	while (1)
	{
		for (int i = 0; i < 3; i++)
		{
			for (int j = 0; j < 3; j++)
			{
				if (i == xpos && j == ypos)
				{
					printf("  ");
				}
				else
				{
					printf("%d ", arr[i][j]);
				}
			}
			printf("\n");
		}
		
		winer = win(arr);
		if (winer == 1)
		{
			printf("완성!!!\n");
			break;
		}

		printf(">> 방향키 선택\n");
		key = get_directionkey();

		switch (key)
		{
		case 77:	//RIGHT
			if ( ypos > 0 && ypos < 3 )
			{
				ypos--;
				arr[xpos][ypos + 1] = arr[xpos][ypos];
				system("cls");
				break;
			}
			else
			{
				printf("잘못된 방향입니다. 방향키를 입력해주세요.\n");
				Sleep(500);
				system("cls");
				continue;
			}
		case 75:	//LEFT
			if (ypos > -1 && ypos < 2)
			{
				ypos++;
				arr[xpos][ypos - 1] = arr[xpos][ypos];
				system("cls");
				break;
			}
			else
			{
				printf("잘못된 방향입니다. 방향키를 입력해주세요.\n");
				Sleep(500);
				system("cls");
				continue;
			}
		case 72:	//UP
			if (xpos > -1 && xpos < 2)
			{
				xpos++;
				arr[xpos - 1][ypos] = arr[xpos][ypos];
				system("cls");
				break;
			}
			else
			{
				printf("잘못된 방향입니다. 방향키를 입력해주세요.\n");
				Sleep(500);
				system("cls");
				continue;
			}
		case 80:	//DOWN
			if (xpos > 0 && xpos < 3)
			{
				xpos--;
				arr[xpos + 1][ypos] = arr[xpos][ypos];
				system("cls");
				break;
			}
			else
			{
				printf("잘못된 방향입니다. 방향키를 입력해주세요.\n");
				Sleep(500);
				system("cls");
				continue;
			}
		default:
			printf("잘못 입력하셨습니다. 방향키를 입력해주세요.\n");
			Sleep(500);
			system("cls");
			continue;
		}
	}

	return 0;
}


/*

화면 지우기 :
system("cls"); //콘솔 화면을 지우기

키 값 입력받기 :
int get_directionkey()//방향키를 입력받는 함수
{
int key;
key = _getch();
if (key == 224)//방향키
{
return _getch(); //어떤 방향 키인지 반환
}
return 0;	//방향키가 아님
}
--------------------
key = get_directionkey();
switch (key)
{
case 77:	//RIGHT
break;
case 75:	//LEFT
break;
case 72:	//UP
break;
case 80:	//DOWN
break;
}
--------------------

*/