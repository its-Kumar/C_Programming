//program to check string palindrome

#include<stdio.h>

int main(void){
	char str[20];
	int i,j;
	
	printf("Enter a string : ");
	gets(str);
	for(i=0,j=strlen(str)-1;i<=j;i++,j--)
		if(str[i] != str[j])
			break;
	if(i > j)
		printf("String is a palindrome string.");
	else
		printf("String is not a palindrome string");
		
return 0;

}
