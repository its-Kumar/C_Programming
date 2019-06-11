#include <stdio.h>
#include <conio.h>

int main(){
	FILE *fp;
	char ch;
	fp=fopen("raman.txt","w");
	printf("Input lines and press EOF");
	while((ch=getchar())!='~')
	{
		putc(ch,fp);
	}
	fclose(fp);
	printf("Output:\n");
	fp=fopen("raman.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf("%c",ch);
	}
	fclose(fp);
	getch();
}
