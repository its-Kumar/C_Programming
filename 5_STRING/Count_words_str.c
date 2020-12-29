//program to count words in string

#include <string.h>
#include <stdio.h>
#include <ctype.h>
int isSpace(char c)
{
	if (c == ' ')
		return 1;
	return 0;
}
int count_words(char str[])
{
	int count = 0;
	while (*str != '\0')
	{
		while (isSpace(*str))
			str++;
		if (*str == '\0')
			return count;
		while (!isSpace(*str) && *str != '\0')
		{
			putchar(*str);
			str++;
		}
		count++;
		printf("\n");
	}
	return count;
}

int main(void)
{
	char str[20];

	printf("Enter a string : ");
	gets(str);
	puts(str);
	printf("No of words in string is = %d", count_words(str));
}
