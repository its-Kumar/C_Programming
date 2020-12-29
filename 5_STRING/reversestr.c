#include <stdio.h>
#include "str_fun.c"
void revrse(char *, int);
void main()
{
	char s[50], l;
	printf("Enter the string:-");
	gets(s);
	l = len(s);
	revrse(s, l);
	puts(s);
}
void revrse(char *s, int l)
{
	char temp;
	int i;
	for (i = 0; i <= l / 2; i++)
	{
		temp = *(s + i);
		*(s + i) = *(s - i + l - 1);
		*(s - i + l - 1) = temp;
	}
}
