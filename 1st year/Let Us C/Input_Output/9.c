#include<stdio.h>

main(){
	FILE *fp;
	
	fp=fopen("PR1.c", "r");
	if(fp==NULL)
	{
		puts("Cannot open file.");
		
	}
}