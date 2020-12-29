#include <stdio.h>
#include "showbits.c"

int main()
{
	int j, k;

	for (j = 0; j <= 3; j++)
	{
		printf("\nDecimal %d is same as binary", j);
		showbits(j);

		k = ~j;
		printf("\nOne's complement of %d is", j);
		showbits(k);
	}
}
