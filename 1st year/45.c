#include<stdio.h>

void main(){
	int n;
	int sum(int);
	printf("Enter the value of n:\n");
	scanf("%d",&n);
	printf("The sum of n integers = %d",sum(n));

}
int sum(int n){
	if(n==0)
	return 0;
	else
	return (n+sum(n-1));
}
