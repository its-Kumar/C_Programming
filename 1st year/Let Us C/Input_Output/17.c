#include <stdio.h>
main()
{
	FILE *fp;
	char ch;
	int noc=0;
	
	fp=fopen("poem.txt", "r");
	if(fp==NULL)
	{
		printf("Cannot open file");
		exit(0);
	}
	while(1)
	{
		ch=getc(fp);
		
		if(ch==EOF)
		break;
	noc++;
	}
	fclose(fp);
	printf("\nNumbers of characters = %d", noc);
}
