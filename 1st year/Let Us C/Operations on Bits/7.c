#include<stdio.h>

//to test whether a bit in a number is ON orOFF

int main(){
	int i=65,j;
	
	printf("\nValue of i = %d",i);
	j=i&32;
	
	if(j==0)
	printf("\nand its fifth bit is off");
	else
	printf("\nand its fifth bits is on");
	j=i&64;
	
	if(j==0)
	printf("\nwhereas its sixth bit is off");
	else
	printf("\nwhereas its sixth bit is on");
}
	
