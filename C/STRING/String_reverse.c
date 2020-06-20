//program to reverse string

#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end)
{
	char tmp;

	while (start <= end)
	{
		tmp = str[start];
		str[start] = str[end];
		str[end] = tmp;
		start++;
		end--;
	}
}
void reverseStr(char str[])
{
	int i, j;
	char tmp;

	for (i = 0, j = strlen(str) - 1; i <= j; i++, j--)
	{
		tmp = str[i];
		str[i] = str[j];
		str[j] = tmp;
	}
}
int main(void)
{
	char str[20];
	int i, j;

	printf("Enter a string : ");
	gets(str);
	reverseStr(str);
	puts(str);
	reverse(str, 3, 6);
	puts(str);

	return 0;
}
