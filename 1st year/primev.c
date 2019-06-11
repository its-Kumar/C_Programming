#include<stdio.h>
void main()
{
	int i,n,flag=0;
	printf("Enter number \n");
	scanf("%d",&n);
	for(i=2;i<=sqrt(n);i++){
		if(n%i==0){
			flag++;
			break;
		}
	}
	if(flag!=1)
		printf("prime number");
	else
		printf("not prime number");
}
