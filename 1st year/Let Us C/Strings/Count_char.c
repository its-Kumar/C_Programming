#include<stdio.h>

int main(){
	int i, j, count=0;
	char s[150]; char ch;
	printf("Enter a string:\t");
	gets(s);
	printf("\nYou have entered:\n");
	puts(s);
	printf("\nEnter the character to count:\t");
	scanf("%c", &ch);
	for(i=0;s[i]!='\0';i++){
		if(s[i]==ch)
		count++;
	}
	printf("\nNo is = %d\n", count);
	return 0;
}
