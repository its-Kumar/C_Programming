#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int p, r, t, si, ci, k;
	printf("enter the principle amount(p),rate of interest(r),time(t)\n");
	scanf("%d%d%d", &p, &r, &t);
	si = (p * r * t) / 100;
	k = p * pow((1 + (r / 100.0)), t);
	ci = k - p;
	printf("\n the simple interest=%d\n the compound interest is=%d", si, ci);
	getch();
}
