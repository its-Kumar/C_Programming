#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,sum_e=0,sum_o=0;
	printf("enter limit \n");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
	if(i%2!=0)
	sum_o+=i;
	else
	sum_e+=i;
}
    printf("sum of even no.=%d \n",sum_e);
    printf("sum of odd no.=%d \n",sum_o);
    getch();	
}
