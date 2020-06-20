#include <stdio.h>
#include <conio.h>
#include <math.h>
char main()
{
	char k;
	printf("enter any character \n");
	scanf("%c", &k);
	switch (k)
	{
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
		printf("it is vowel \n");
		break;
	default:
		printf("it is not vowel");
		getch();
	}
}
