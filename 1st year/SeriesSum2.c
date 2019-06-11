#include<stdio.h>

void main()
{
	int n,i;
	float s=0,f=1;
	printf("\n Enter the Number of terms:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
		s=s+(i/f);
	}
	printf("\n %f",s);
	getch();
}
