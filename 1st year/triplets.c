//to find pythagores triplet

#include<stdio.h>

int main(void){
	int sum,a=0,b=0,c=0;
	
	printf("Enter the sum : ");
	scanf("%d",&sum);
	a=b=sum/3;
	
	while(sum !=(a+b+c)){
	
	c=srt(pow(a,2)+pow(b,2));
	}
}
