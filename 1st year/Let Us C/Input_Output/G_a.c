#include<stdio.h>
#include<conio.h>
#include<ctype.h>

void main(){
	FILE *f;
	char ch;
	int lines=0, words=0;
	
	f=fopen("FILE.txt", "w");
	printf("\nEnter Text Press Ctrl+z to quit\n");
	do{
		ch=getchar();
		putc(ch,f);
	}
	while(ch!=EOF);
	fclose(f);
	f=fopen("FILE.txt", "r");
	while((ch=getc(f))!=EOF)
	{
		if(ch=='\n')
		lines++;
		if(isspace(ch)||ch=='\t'||ch=='\n')
		words++;
		putchar(ch);
	}
	fclose(f);
	printf("\nNo. of lines = %d\n", lines);
	printf("No. of Words = %d\n", words);
	getch();
}
