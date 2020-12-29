//writes records to a file using structure
#include <stdio.h>
main()
{
	FILE *fp;
	char another = 'y';
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;

	fp = fopen("Employee.dat", "w");

	if (fp == NULL)
	{
		puts("Cannot open file.");
		exit(0);
	}
	while (another == 'y')
	{
		printf("\nEnter name, age and basic salary:");
		scanf("%s %d %f", e.name, &e.age, &e.bs);
		fprintf(fp, "%s %d %f\n", e.name, e.age, e.bs);

		printf("Add another record(y/n):");
		fflush(stdin);
		another = getche();
	}
	fclose(fp);
}
