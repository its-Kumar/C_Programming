#include<stdio.h>
#include<conio.h>
int main()
{
	char ch;
	printf("\n enter any cherecter \n");
	scanf("%c",&ch);
	if(ch>='a'&&ch<='z')
	printf("enter character is a small letter alphabet");
	else if(ch>='A'&&ch<='Z')
	printf("enter character is a CAPITAL letter alphabet");
	else if(ch>='0'&&ch<='9')
	printf("it is a character of digit");
	else 
	printf("enter character is a special symbol");
	getch();
}
	
	
