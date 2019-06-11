#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

int is_vowel(int ch){
    switch(ch){
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            return 1;
    }
    return 0;
}
int main(void){
    char wrong[50],right[50];
    int i,j;
    FILE *fptr1,*fptr2;

    if( (fptr1=fopen("wrong.txt","r") )==NULL){
        printf("Error in openning file\n");
        exit(1);
    }
    if( (fptr2=fopen("right.txt","w") )== NULL){
        printf("Error in openning file\n");
        exit(1);
    }
    while((fgets(wrong,100,fptr1)) !=NULL){
        i=j=0;
        while(wrong[i]!='\0'){
            if(islower(wrong[i]) && (i==0 || wrong[i-1] == '.'))
                right[j++]=toupper(wrong[i++]);
            else if(wrong[i] == ' ' && wrong[i-1] =='a' && is_vowel(wrong[i+1])){
                right[j++]='n';
                right[j++]=wrong[i++];
            }
            else
                right[j++] =wrong[i++];
            
        }
        right[j]='\0';
        fputs(right,fptr2);
    }
}
