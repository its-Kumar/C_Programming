#include <stdio.h>
#include <conio.h>
#include <math.h>
void main()
{
	int a, b = 1189, c = 841, i = 1;
	printf("\nPlease input the limit");
	scanf("\n %d", &a);
	if (a == 0)
		printf("\n%d   %d", b, c);
	while (i != (a + 1))
	{
		if (i % 2 != 0)
			printf("\n%d   %d", b /= 2, c);
		else
			printf("\n %d  %d", b, c /= 2);
		i++;
	}
}
