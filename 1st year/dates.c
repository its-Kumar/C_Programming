#include <stdio.h>

struct date
{
	int dd;
	int mm;
	int yy;
} d1, d2;

main()
{
	printf("Input dates(DD/MM/YY):\n");
	scanf("%d%d%d", &d1.dd, &d1.mm, &d1.yy);
	scanf("%d%d%d", &d2.dd, &d2.mm, &d2.yy);
	if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yy == d2.yy))
		printf("dates are equal");
	else
		printf("dates not are equal");
}
