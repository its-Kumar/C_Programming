//Program to demonstrate printing of strings
#include<stdio.h>

main()
{
	char name[]="Klinsman";
	char *ptr;
	
	ptr=name; //store base address of string
	while(*ptr!='\0')
	{
		printf("%c",*ptr);
		ptr++;
	}
}
