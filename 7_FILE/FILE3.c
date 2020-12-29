// writes records to a file using structure in binary mode
#include <stdio.h>

#include <stdlib.h>

void main()
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

	fp = fopen("EMPLOYEE.DAT", "wb");
	if (fp == NULL)
	{
		puts("Cannot Open File....");
		exit(1);
	}
	while (another == 'y')
	{
		printf("\nEnter name,age and basic salary:");
		scanf("%s %d %f", e.name, &e.age, &e.bs);
		fwrite(&e, sizeof(e), 1, fp);

		printf("ADD Another record(y/n):");
		fflush(stdin);
		another = getche();
	}
	fclose(fp);
}
