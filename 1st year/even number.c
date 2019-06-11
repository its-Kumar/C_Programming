#include<stdio.h>
void main()
{
	int i,n;
	double s=1;
	printf("\n Enter any Integer Number:-");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		s=s*i;
	}
	printf("Factorial of %d = %.1lf",n,s);
	getch();
}

