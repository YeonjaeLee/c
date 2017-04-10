#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void ShowPosition3(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

Point GetCurrentPosition3(void)
{
	Point cen;
	printf("Input current pos: ");
	scanf("%d %d", &cen.xpos, &cen.ypos);
	return cen;
}

int main3(void)
{
	Point curPos = GetCurrentPosition3();
	ShowPosition3(curPos);

	return 0;
}