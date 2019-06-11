#include<stdio.h>
#include<conio.h>
int main()
{
	int i,sum=0,n,a=-1,b=1,c;
	printf("enter number of terms\n");
	scanf("%d",&n);
	printf("series upto %d terms \n",n);
	for(i=1;i<=n;i++)
	{
	c=a+b;
	a=b;
	b=c;
	sum+=c;
    printf("%d",c);
	}
	printf("\n sum upto %d terms=%d",n,sum);
	getch();
}
