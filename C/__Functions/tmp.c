#include <stdio.h>

void (*fun[2])(int);
void main(int n = 1)
{
	int i;
	printf("\n%d", n);

	fun[0] = &exit;
	fun[1] = &main;

	i = ++n <= 10;
	(fun[i])(n);
}
