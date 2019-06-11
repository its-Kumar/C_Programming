
#include<stdio.h>
#include<math.h>

void main(){
	int i,j,flag,n;
	printf("Prime numbers b/w 1 to 300 are:\n");	
	for(n=2;n<=300;n++)
	{
		flag=0;
	for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
		flag=1;
		break;
		}
	}
	if(flag==0)
		printf("  %d",n);
	else
		continue;
	}
getch();

}
