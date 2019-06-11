#include<stdio.h>
#include<string.h>

int cspn(char s1[],char s2[]);
int spn(char s1[],char s2[]);
char* rchr(char str[],char c);
char* chr(char str[],char c);

char* str(char str[],char sub[]){
	int i=0,j;
	
	while(sub[i] !='\0'){
		j=0;
		while(str[j] !='\0'){
			if((sub[i] == str[j]) && (str[j+1] == sub[i+1]))
				return &str[j];
			j++;
		}
		i++;
	}
	return NULL;
}
int main(void){
	char *p;
	int n;
	p=chr("kumar shanu",'m');
	printf("%s\n", p);
	n=cspn("honor 9 lite","akj");
	printf("%d\n", n);
	p=str("honor on lite","hello");
	printf("%s\n", p);
}
char* chr(char str[],char c){
	int i=0;
	while(str[i] !='\0'){
		if(str[i] == c)
			return &str[i];
		i++;
	}
	return NULL;
}
char* rchr(char str[],char c){
	int i,l;
	l=strlen(str);
	
	for(i=l-1; i>=0; i--){
		if(str[i] == c)
			return &str[i];
	}
	return NULL;
}
int spn(char s1[],char s2[]){
	int i=0,j=0,count=0;
	while(s2[i] !='\0'){
		j=0;
		while(s1[j] !='\0'){
			if(s1[j] == s2[i])
				count++;
			j++;
		}
		i++;
	}
	return count;	
}
int cspn(char s1[],char s2[]){
	int i=0,j,count=0;
	
	while(s1[i] !='\0'){
		j=0;
		while(s2[j] !='\0'){
			if(s1[i] == s2[j])
				return count;
			j++;
		}
		i++;
		count++;
	}
	return count;	
}
