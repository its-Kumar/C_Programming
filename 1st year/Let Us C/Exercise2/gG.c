#include <stdio.h>

int main()
{
	float h;
	printf("Enter the time taken by the worker(in hours):");

	scanf("%f", &h);

	if (h >= 2 && h <= 3)
	{
		printf("\nWorker is highly efficient....");
	}
	else if (h >= 3 && h <= 4)
	{
		printf("\nworker should improve his speed......");
	}
	else if (h >= 4 && h <= 5)
	{
		printf("\nWorker should take training to improve the speed.......");
	}
	else if (h >= 5)
	{
		printf("\nWorker has to leave the company........");
	}
	getch();
}
