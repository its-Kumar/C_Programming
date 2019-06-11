#include<stdio.h>
#include<string.h>

void main(){
	char s1[10],s2[15];
	int i;
	printf("Enter string:\n");
	gets(s1);
	for(i=0;i<strlen(s1);i++){
		if(s1[i]!=32)
			s1[i]=s1[i]-32;
	}
	puts(s1);	
}
