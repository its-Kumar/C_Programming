#include<stdio.h>

void main(){
	char i,j,k;
	
	for(i='A';i<='D';i++){
		for(k='A';k<=i;k++)
			printf("  %c", k);
		printf("\n");
	}
}
