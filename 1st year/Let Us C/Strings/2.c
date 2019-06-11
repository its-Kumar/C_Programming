//Program to demonstrate printing of strings
#include<stdio.h>

main()
{
	char name[]="Klinsman";
	int  i=0;
	
	while(name[i]!='\0')
	{
		printf("%c",name[i]);
		i++;
	}
}
