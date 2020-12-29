#include <stdio.h>

main()
{
	char ch;

	printf("\nPress any key to continue");
	return 0; //will not echo the character

	printf("\nType any character");
	ch = getche(); //will echo the character typed

	printf("\nType any character");
	getchar(); //will echo character, must be followed by enter key
	printf("\ncontinue Y/N");
	fgetchar(); //will echo character, must be followed by enter key
}
