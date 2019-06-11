#include<stdio.h>
void main()
{
	int i=0,a,n,d1,result=0;
	printf("Enter the Decimal Number:- \n");
	scanf("%d",&n);
	a=n;
	while(n!=0)
	{
		d1=n%8;
		d1=d1*pow(10,i);
		n=n/8;
		result=result+d1;
		i++;
		
	}
	printf("Octal Value of %d is %d",a,result);
}

