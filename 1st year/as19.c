#include<stdio.h>
#include<conio.h>
int main()
{
	int x,y,z;
	printf("input value of x,y,z \n");
	scanf("%d%d%d",&x,&y,&z);
	x=x+y+z;
	z=x-(y+z);
	y=x-(z+y);
	x=x-(z+y);
	printf("\nafter swaping \nthe value of x=%d \n y=%d \n z=%d \n ",x,y,z);
	getch();
}
