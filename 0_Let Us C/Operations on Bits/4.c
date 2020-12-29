#include <stdio.h>
#include "showbits.c"
//print binary equivalent of integers using showbits() function

int main()
{
	int i = 5225, j, k;

	printf("\nDecimal %d is same as binary", i);
	showbits(i);
	for (j = 0; j <= 5; j++)
	{
		k = i >> j;
		printf("\n%d right shift %d gives", i, j);
		showbits(k);
	}
}
