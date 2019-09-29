#include<stdio.h>
#include<string.h>


void remove_space(char *s,char *result){
    int i=0,j=0;
    while(s[i] !='\0'){
        if(s[i] != ' '){
            result[j++] =s[i];
        }
        i++;
    }
}

int main(void){
    char str[50],result[50];

    printf("\nEnter any string: ");
    gets(str);

    printf("\nThe string is : \n");
    puts(str);

    remove_space(str,result);
    printf("\nThe string without spaces is : \n");
    puts(result);

    return 0;
}

