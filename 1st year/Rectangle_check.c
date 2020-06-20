//check if two rectangles overlap with each other

#include <stdio.h>
typedef struct
{
	int x, y;
} point;

typedef struct
{
	point l; //top left point
	point r; //bottom right point
} rectangle;

typedef enum
{
	false,
	true
} boolean;

boolean Do_overlap(rectangle R1, rectangle R2)
{
	if (R2.r.x < R1.l.x || R2.l.x > R1.r.x)
		return false;
	if (R1.l.y < R2.r.y || R2.l.y < R1.r.y)
		return false;
	return true;
}
void main()
{
	rectangle R1, R2;

	printf("Enter the co-ordinates for rectangle 1:");
	scanf("%d%d", &R1.l.x, &R1.l.y);
	scanf("%d%d", &R1.r.x, &R1.r.y);
	printf("Enter the co-ordinates for rectangle 2:");
	scanf("%d%d", &R2.l.x, &R2.l.y);
	scanf("%d%d", &R2.r.x, &R2.r.y);
	if (Do_overlap(R1, R2))
		printf("Rectangle overlaps");
	else
		printf("Rectangle does not overlaps");
}
