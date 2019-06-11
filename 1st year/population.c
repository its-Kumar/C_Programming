#include<stdio.h>

void main(){
	int pop=100000,y;
	
	for(y=1;y<=10;y++){
		pop=pop+(pop*10/100);
		printf("\nThe population in %d year = %d",y,pop);
	}
}
