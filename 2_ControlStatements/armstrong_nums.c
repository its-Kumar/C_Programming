// Armstrong numbers from 0 to 1000

#include <stdio.h>

void main()
{
	int i, d, s = 0, n;

	for (i = 0; i <= 1000; i++)
	{
		n = i;
		while (n != 0)
		{
			d = n % 10;
			s = s + (d * d * d);
			n = n / 10;
		}
		if (s == i)
			printf(" %d is a Armstrong Number\n", i);
		s = 0;
	}
}
