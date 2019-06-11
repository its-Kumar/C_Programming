#include<stdio.h>

void main(){
	int f=1,i,n;
	
	printf("Enter any integer:");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		f=f*i;
	
	printf("\n The factorial of the %d is = %d",--i,f);
		
	
}
