#include<stdio.h>

void main(){
	int positive=0, negative=0, zero=0,n;
	char c;
	
	while(n!='n'){
		printf("\nPlease enter the numbers:\n");
		scanf("%d",&n);
		if(n==0)	
			zero++;
		else if(n>0)
			positive++;
		else
			negative++;
	}
	printf("\nResult:\n");
	printf("Positive = %d\n Negative = %d\n Zeroes = %d",positive,negative,zero);
}
