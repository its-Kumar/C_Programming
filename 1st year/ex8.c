#include <stdio.h>
#include <conio.h>
int main()
{
	int x, n, y;
	printf("\n enter the value of x and n=\n");
	scanf("%d%d", &x, &n);
	y = x << n;
	printf("\n result is=%d", y);
	getch();
}
