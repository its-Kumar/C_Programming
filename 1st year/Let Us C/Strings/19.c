//Excahnge names using 2-D array of characters
#include<stdio.h>

main(){
	char *names[]={
					"akshay",
					"parag",
					"raman",
					"srinivas",
					"gopal",
					"rajesh"
					};
	char *temp;
	
	printf("\nOriginal: %s %s", names[2], names[3]);
	
		temp=names[2];
		names[2]=names[3];
		names[3]=temp;
	printf("\nNew : %s %s", names[2], names[3]);
}
