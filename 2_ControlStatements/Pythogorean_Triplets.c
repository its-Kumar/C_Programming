#include <stdio.h>

void main()
{
	int a, b, c;
	printf("Pythogorean Triplets:\n");

	for (a = 1; a <= 30; a++)
	{
		for (b = 1; b <= 30; b++)
		{
			for (c = 1; c <= 30; c++)
			{
				if (c * c == (a * a + b * b))
					printf("\n(%d,%d,%d)", a, b, c);
			}
		}
	}
}
