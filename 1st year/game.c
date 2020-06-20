#include <stdio.h>

void main()
{
	int matchstick = 21, computer, pick;

	printf("\n-There are 21 matchsticks.\n");
	printf("\n-Please pick 1, 2, 3 or 4 matchsticks.\n");
	scanf("%d", &pick);
	printf("\n you picks = %d \n", pick);

	while (matchstick != 1)
	{
		if (pick > 4)
		{
			printf("Wrong pick\nplese pick between (1-4)");
			getch();
			exit(0);
		}
		matchstick -= pick;
		printf(" Remaining Matchsticks = %d ", matchstick);
		matchstick -= (5 - pick);
		printf("\n Remaining Matchsticks = %d\n ", matchstick);
		printf("\n its your turn\n");
		scanf("%d", &pick);
		printf("\n you picks = %d \n", pick);
	}
	printf("\n YOU CHOOSE THE LAST ONE SO......");
	printf("\nYOU LOST......!!!!");
}
