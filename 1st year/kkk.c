#include<stdio.h>
#include<conio.h>

void main()
{
	int sum=0,i,count=0;
	for(i=0;i<=100;i++){
		if(i%6==0&&i%4!=0){
			count++;
			sum+=i;
		}
	}
	printf("Sum= %d\nCount =%d",sum,count);	
}

