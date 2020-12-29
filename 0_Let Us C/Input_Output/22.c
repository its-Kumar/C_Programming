#include<stdio.h>
main()
{
	FILE *fp;
	char ch;
	
	fp=fopen("TRIAL", "w");
	
	while(!feof(fp))
	{
		ch=fgetc(fp);
		if(ferror(0))
		{
			printf("Error in  reading File.");
			break;
		}
		else
		printf("%c", ch);
	}
	fclose(fp);
}
