#include <stdio.h>

void main()
{
	int x, y;
	printf("Enter the coordinates(x,y):");
	scanf("%d%d", &x, &y);
	printf("The given point (%d,%d) lies on:", x, y);
	if (x == 0 && y == 0)
		printf("Origion.");
	else if (x == 0)
		printf("Y-axis.");
	else if (y == 0)
		printf("X-axis.");
	else
		printf("Neither on X-axis nor Y-axis.");
	return 0;
}
