//File copy by using argc and argv

#include<stdio.h>
#include<stdlib.h>

void main(int argc,char *argv[]){
	FILE *ft,*fs;
	char ch;
	
	if(argc!=3){
		puts("improper number of arguments");
		exit(0);
	}
	fs=fopen(argv[1],"r");
	if(fs==NULL){
		puts("Cannot open source file....");
		exit(0);
	}
	ft=fopen(argv[2],"w");
	if(ft==NULL){
		puts("Cannot open target file....");
		fclose(fs);
		exit(0);
	}
	while(1){
		ch=fgetc(fs);
		if(ch==EOF)
			break;
		else
			fputc(ch,ft);
	}
	fclose(fs);
	fclose(ft);
}

