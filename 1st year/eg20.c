#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("enter limit of sum \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("sum upto %d is %d",n,sum);
	getch();
}
