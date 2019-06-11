#include<stdio.h>
#include<string.h>

void main(){
	char s1[10],s2[15];
	int i,j,k=0;
	printf("Enter string:\n");
	gets(s1);
	i=strlen(s1);
	for(j=i-1;j>=0;j--){
		s2[k]=s1[j]-32;
		k++;
	}
	puts(s2);String is palindrome.....");
	else
		printf("\nString is Not palindrome.....");
	
}
