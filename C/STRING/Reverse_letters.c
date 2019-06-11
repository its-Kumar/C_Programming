//program to reverse letters in words

#include<stdio.h>
#include<string.h>
void reverse(char str[],int start,int end){
	char tmp;
	
	while(start<=end){
		tmp=str[start];
		str[start]=str[end];
		str[end]=tmp;
		start++;
		end--;
	}
}

void reverse_letters(char str[],int start ,int end){
	int w_start,w_end;
	for(w_start=w_end=start; w_end<end; w_end++){
		if(str[w_end]==' ')
			continue;
		w_start = w_end;
		while(str[w_end] != ' ' && w_end<=end)
			w_end++;
		w_end--;
		reverse(str,w_start,w_end);
	}
}
int main(void){
	char str[20];
	int i,j;

	printf("Enter a string : ");
	gets(str);
	puts(str);
	reverse_letters(str,0,strlen(str)-1);
	puts(str);

return 0;
}
