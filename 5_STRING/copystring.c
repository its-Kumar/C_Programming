#include <stdio.h>
#include "str_fun.c"

void main()
{
	int c;
	char s1[50], s2[50];
	printf("Enter string1:-");
	gets(s1);
	printf("Enter string2 :-\n");
	gets(s2);
	rev(s1);
	puts(s1);
}
