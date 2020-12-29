#include <stdio.h>

struct date
{
	int dd;
	int mm;
	int yy;
} d1, d2;

int main()
{
	printf("Input two dates(DD/MM/YY): ");
	scanf("%d%*c%d%*c%d", &d1.dd, &d1.mm, &d1.yy);
	scanf("%d%*c%d%*c%d", &d2.dd, &d2.mm, &d2.yy);
	if ((d1.dd == d2.dd) && (d1.mm == d2.mm) && (d1.yy == d2.yy))
		printf("dates are equal");
	else
		printf("dates not are equal");
	return 0;
}
