#include<stdio.h>
#include<conio.h>
void main()
{
	int i=5,j=14;
	printf("\n in starting i=%d,j=%d",i,j);
	j=i+j;
	i=j-i;
	j=j-i;
	printf("\n after swap i=%d,j=%d",i,j);
	getch();
}
