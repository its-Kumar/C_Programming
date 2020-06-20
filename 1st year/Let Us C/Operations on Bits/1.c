#include <stdio.h>
#include "showbits.c"
//print binary equivalent of integers using showbits() function

int main()
{
	int j;

	for (j = 0; j <= 5; j++)
	{
		printf("\nDecimal %d is same as binary", j);
		showbits(j);
	}
}
