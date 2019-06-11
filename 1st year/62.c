#include<stdio.h>
#include<string.h>

void main(){
	char s1[50];
	
	
	int i,j;
	char t;
	printf("Enter string:\n");
	gets(s1);
	
	for(i=0;i<strlen(s1)-1;i++){
		j=1;
		while(j<strlen(s1)-i){
		if(s1[j-1]>s1[j])
			{
				t=s1[j-1];
				s1[j-1]=s1[j];
				s1[j]=t;	
			}
			j++;
	}
}
	printf("\nSort string in alphabetical order:\n\n");
	puts(s1);	
}
