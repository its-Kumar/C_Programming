#include <stdio.h>
#include <math.h>
void main()
{
	int s[4][2] = {{1234, 56},
				   {1212, 33},
				   {1434, 80},
				   {1312, 78}};
	int(*p)[2];
	int i, j, *pint;
	for (i = 0; i < 4; i++)
	{
		p = &s[i];
		pint = (int *)p;
		printf("\n");
		for (j = 0; j < 2; j++)
			printf("%d  ", *(pint + j));
	}
	pow(2, 2);
}
