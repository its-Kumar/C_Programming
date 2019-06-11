#include<stdio.h>

main()
{
	FILE *fp;
	char ch;
	int nol=0,not=0,noc=0,nob=0;
	
	fp=fopen("FILE.txt", "r");
	
	while(1)
	{
		ch=fgetc(fp);
		if(ch==EOF)
			break;
			noc++;
		if(ch==' ')
			nob++;
		if(ch=='\n')
			nol++;
		if(ch=='\t')
			not++;
	}
	fclose(fp);
	printf("\nNumber of Characters = %d", noc);
	printf("\nNumber of Blanks = %d", nob);
	printf("\nNumber of Tabs = %d", not);
	printf("\nNumber of Lines = %d", nol);
}
