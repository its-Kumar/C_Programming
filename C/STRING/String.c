#include <stdio.h>
unsigned int len(char *str)
{
	char *p = str;
	while (*p != '\0')
		p++;
	return (p - str);
}

char *rev(char str[])
{
	int i, l = len(str);
	char t;
	for (i = 0; i < l / 2; i++)
	{
		t = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = t;
	}
	return str;
}
char *cat(char str1[], char str2[])
{
	int i = 0, j = 0;
	//goto end of the first str
	while (str1[i] != '\0')
		i++;
	while (str1[i++] = str2[j++])
		;
	return str1;
}
char *cpy(char str1[], char str2[])
{
	int i = 0;
	while ((str1[i] = str2[i]) != '\0')
		i++;
	return str1;
}
/*
int cmp(char str1[],char str2[]){
	int i;
	for(i=0; str1[i] == str2[i]; i++)
		if(str1[i] == '\0')
			return 0;
	return str1[i]-str2[i];
}*/
int cmp(char *str1, char *str2)
{
	while (*str1 == *str2)
	{
		if (*str1 == '\0')
			return 0;
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}

/*
unsigned int len(char str[]){
	int i=0;
	while(str[i]!='\0')
		i++;
	return i;
}*/
int main(void)
{
	char str1[50], str2[50];
	printf("Enter a string : ");
	gets(str1);
	printf("\n");
	puts(str1);

	printf("\nLenght is : %d\n", len(str1));

	rev(str1);
	puts(str1);
	//printf("\nEnter another string : ");
	//gets(str2);
	/*printf("\n");
	puts(str2);
	printf("\nLenght is : %d", len(str2));
	if(cmp(str1,str2)==0)
		printf("\nStrings are same\n");
	else
		printf("\nStrings are not same\n");
	printf("%d", cmp(str1,str2));
*/
	cat(str1, str2);
	//cpy(str2,str1);
	puts(str1);
}
