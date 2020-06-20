#include <stdio.h>
void main()
{
	int i, j;
	for (i = 1; i <= 8; i++)
	{
		for (j = 1; j <= 8; j++)
			printf("   %d", j);
		printf("\n");
	}
	//getch();
}

/*
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
   1   2   3   4   5   6   7   8
*/
