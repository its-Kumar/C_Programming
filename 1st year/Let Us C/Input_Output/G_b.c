#include<stdio.h>

main()
{
	FILE *fp;
	int i, words=0;
	char c[200];
	
	fp=fopen("FILE.txt", "w");
	  if ((fp = fopen("FILE.txt", "w")) == NULL)
    {
        printf("Error! opening file");
        // Program exits if file pointer returns NULL.
        exit(1);         
    }
       	printf("Enter a sentence:\n");
   		do{
		   	gets(c);
		    fprintf(fp,"%s",c);
			}
			while(getche(c!='~'));
	fclose(fp);
	getch();
}
