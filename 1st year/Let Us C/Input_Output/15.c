//formatted disk I/O function
#include "stdio.h"
main()
{
	FILE *fp;
	char another = 'Y';
	char name[40];
	int age;
	float bs;

	fp = fopen("employee.dat", "r");
	if (fp == NULL)
	{
		puts("Cnnot open file.");
		exit(0);
	}
	while (fscanf(fp, "%s %d %f", name, &age, &bs) != EOF)
		printf("\n%s %d %f", name, &age, &bs);

	fclose(fp);
}
