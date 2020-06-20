//reads records to a file using structure
#include <stdio.h>
main()
{
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;

	fp = fopen("Employee.dat", "r");

	if (fp == NULL)
	{
		puts("Cannot open file.");
		exit(0);
	}
	while (fscanf(fp, "%s %d %f", e.name, &e.age, &e.bs) != EOF)
		printf("\n%s %d %f", e.name, e.age, e.bs);

	fclose(fp);
}
