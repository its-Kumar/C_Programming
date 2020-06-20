//Program to demonstrate printing of strings
#include <stdio.h>

main()
{
	char arr[] = "Bamboozled";
	int len1, len2;

	len1 = strlen(arr);
	len2 = strlen("Humpty Dumpty");

	printf("\nString = %s Length= %d", arr, len1);
	printf("\nstring = %s Length =%d", "Humpty Dumpty", len2);
}
