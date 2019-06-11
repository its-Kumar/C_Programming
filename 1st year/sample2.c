#include<stdio.h>

void main(){
	static int j=1;
	j=2;
	printf("%d\n",j);
}
