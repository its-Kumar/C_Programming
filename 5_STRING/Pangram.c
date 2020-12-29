#include <stdio.h>
#include <ctype.h> //ctype.h is very usefull c library when you are working with the characters

#define False 0 //define macro for False and True
#define True 1
int is_pangram(char *s)
{
    /*
        This function takes a string and returns True if string is a pangram
        rturn False else.

        "A string is called a Pangram if it contains every letter from 'a'-'z' or 'A'-'Z' atleast ontime."
     */
    int arr[26]; //declare a array for corresponding 26 letters of english
    int i = 0;
    for (i = 0; i < 26; i++)
        //initialize the whole array as False
        arr[i] = False;

    while (*s)
    {
        //check for the position of the character and push 'True' at that position
        if (*s != " ")
        {
            if (islower(*s))
                arr[*s - 'a'] = True; //finds position of lowercase charcters i.e. for 'b' it will 2
            if (isupper(*s))
                arr[*s - 'A'] = True; //finds position of uppercase charcters i.e. for 'B' it will 2
        }
        s++;
    }

    for (i = 0; i < 26; i++)
        //check the array for any missing position
        if (arr[i] == False)
            //if there is any missing position than the string is not a pangram
            return False;

    //if there is not any missing position than string is a pangram
    return True;
}

int main(void)
{
    char str[50];
    printf("Enter any string : ");
    gets(str);
    printf("\n\nYou have entered : \n");
    puts(str);
    if (is_pangram(str))
        printf("\nThe string is a Pangram..!!");
    else
        printf("\nThe string is not a Pangram..!!");
    printf("\nThanks..!!");
    return 0;
}
