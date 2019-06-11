#include<stdio.h>
#include<string.h>
int count(char str[],char c){
	int i=0, cnt=0;
	while(str[i] != '\0'){
		if(str[i] == c)
			cnt++;
		i++;
	}
	return cnt;
}
void replace(char str[], char c1,char c2){
	int i=0;
	while(str[i] !='\0'){
		if(str[i] == c1)
			str[i]=c2;
		i++;
	}
}
void del_char(char *str,char c){
	int i,j;
	
	for(i=0,j=0; i<=strlen(str)-1; i++)
		if( *(str+i) !=c)
			*(str+ j++)=*(str + i);
		*(str + j)='\0';
}
int main(void){
	char str[20],c;
	

	printf("Enter a string : ");
	gets(str);
	puts(str);
	printf("Enter char : ");
	scanf("%c", &c);
	printf("occurance of %c is = %d.\n",c ,count(str,c));
	//replace(str,c,'x');
	del_char(str,c);
	puts(str);
	
return 0;
}
