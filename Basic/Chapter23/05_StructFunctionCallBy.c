#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

void OrgSymTrans5(Point * ptr)
{
	ptr->xpos = (ptr->xpos) * -1;
	ptr->ypos = (ptr->ypos) * -1;
}

void ShowPosition5(Point pos)
{
	printf("[%d, %d] \n", pos.xpos, pos.ypos);
}

int main5(void)
{
	Point pos = { 7, -5 };
	OrgSymTrans5(&pos);
	ShowPosition5(pos);
	OrgSymTrans5(&pos);
	ShowPosition5(pos);

	return 0;
}