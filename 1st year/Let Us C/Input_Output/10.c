//A File copy program

#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fs, *ft;
	char ch;
	
	fs=fopen("1.c", "r");
	if(fs==NULL)
	{
		puts("Cannot open source file.");
		
	}
	
	ft=fopen("2.c", "w");
	if(ft==NULL)
	{
		puts("Cannot open target file");
		fclose(fs);
		
	}
	while(1)
	{
		ch=fgetc(fs);
		
		if(ch==EOF)
		break;
		else
		fputc(ch, ft);
	}
	fclose(fs);
	fclose(ft);
	return 0;
}
