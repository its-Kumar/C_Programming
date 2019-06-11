#include<stdio.h>
void main()
{
	void prime(int);
	int n,i,k;
	printf("\n Enter the Number:-");
	scanf("%d",&n);
	prime(n);
}
void prime(int n)
{
	int i,k;
	k=n;
	printf("The prime factors:\n");
	for(i=2;i<=k;i++)
	{
		if(k%i==0)
		{
			printf("  %d",i);
			k=k/i;
			i=1;
		}
		
	}
}
