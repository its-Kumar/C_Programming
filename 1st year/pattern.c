#include<stdio.h>
void main()
{
	int i,j;
	for(i=1;i<=8;i++)
	{
		for(j=1;j<=8;j++)
		printf("   %d",j);
		printf("\n");
	}
	getch();
}
