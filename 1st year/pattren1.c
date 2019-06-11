#include<stdio.h>
void main()
{
	int i,j,k,n,s=1;
	printf("Enter Number of Row\n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i;j++)
			printf("  ");
			for(k=s;k<=(i+s-1);k++)
				printf("  %d",k);
				s=k;
	printf("\n");
}
}

