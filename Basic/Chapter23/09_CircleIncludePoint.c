#include <stdio.h>

typedef struct point
{
	int xpos;
	int ypos;
} Point;

typedef struct circle
{
	Point cen;
	double rad;
} Circle;

void ShowCircleInfo9(Circle * cptr)
{
	printf("[%d, %d] \n", (cptr->cen).xpos, (cptr->cen).ypos);
	printf("radius: %g \n\n", cptr->rad);
}

int main9(void)
{
	Circle c1 = { {1,2}, 3.5 };
	Circle c2 = { 2, 4, 3.9 };
	ShowCircleInfo9(&c1);
	ShowCircleInfo9(&c2);

	return 0;
}