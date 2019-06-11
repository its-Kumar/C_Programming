#include<stdio.h>

void main()
{
	int x,y,r,d,x1,y1;
	printf("Enter the center(x,y):");
	scanf("%d%d",&x,&y);
	printf("Enter the radius of circle(r):");
	scanf("%d",&r);
	printf("Enter any point(x1,y1):");
	scanf("%d%d",&x1,&y1);
	d=sqrt(pow(x-x1,2)+pow(y-y1,2));
	if(d==r)
		printf("Point (%d,%d) lies on the circle.",x1,y1);
	else if(d>r)
		printf("Point (%d,%d) lies outside the circle.",x1,y1);
	else
		printf("Point (%d,%d) lies inside the circle.",x1,y1);
	getch();
	return 0;
}
