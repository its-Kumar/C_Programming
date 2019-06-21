#include<stdio.h>
void encrypt(FILE *fp){
	char c;
	FILE *ft=NULL;
	remove("encrypt.txt");
	
	ft=fopen("encrypt.txt","w");
	if(ft==NULL){
		printf("Error in Encrypting file..");
		return;
	}
	while(1){
		c=fgetc(fp);
		if(c==EOF)
			break;
		c=~c;
		fputc(c,ft);
	}
	fclose(ft);
	printf("Goto the file : encrypt.txt\n\n");
}
