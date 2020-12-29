//program to find first non repeated char

#include <stdio.h>
#include <string.h>

int find_firstNR(char *str)
{
	int i, j;
	int end = (strlen(str) - 1);

	for (i = 0; i < end; i++)
	{
		for (j = 0; j <= end; j++)
			if (str[i] == str[j] && i != j)
				break;
		if (j == end + 1)
			return i;
	}
	return -1;
}

int main(void)
{
	char str[30];
	printf("Enter a string: ");
	gets(str);
	printf("%d\n", find_firstNR(str));
	return 0;
}
