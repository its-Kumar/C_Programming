#include <stdio.h>

main()
{
	int a;
	a = getint();
	printf("\nYou Entered %d\n", a);
}
int getint(int n[])
{
	scanf("%d", &n);
	return (n);
}
