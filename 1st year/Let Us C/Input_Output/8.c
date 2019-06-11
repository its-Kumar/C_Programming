#include<stdio.h>
//Count chars, spaces, tabes and newlines in a file

int main(){
	FILE *fp;
	char ch;
	int nol=0, not=0, nob=0, noc=0;
	
	fp=fopen("2.c", "r");
	while(1){
		ch=fgetc(fp);
		
		if(ch==EOF)
		break;
		
		noc++;
		if(ch==' ');
		nob++;
		
		if(ch=='\n')
		nol++;
		
		if(ch=='\t')
		not++;
	}
	fclose(fp);
	printf("\nNumber of characters =%d",noc);
	printf("\nNumber of blanks =%d",nob);
	printf("\nNumber of tabs =%d",not);
	printf("\nNumber of lines =%d",nol);
}
