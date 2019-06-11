#include<stdio.h>

int xgets(char a[100]);
int xputs(char a[100]);
int main()
{
	char s[100];
	printf("\nEnter a String:\t ");
	xgets(s);
	xputs(s);
	printf("\n");
}
int xgets(char a[100])
{
	scanf("%[^\n]s", a);
}
int xputs(char a[100])
{
	printf("%s", a);
}
