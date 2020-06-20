// read records to a file using structure in binary mode
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

void main()
{
	FILE *fp;
	struct emp
	{
		char name[40];
		int age;
		float bs;
	};
	struct emp e;

	fp = fopen("EMPLOYEE.DAT", "r");
	if (fp == NULL)
	{
		puts("Cannot Open File....");
		exit(1);
	}
	while (fread(&e, sizeof(e), 1, fp) == 1)
		printf("\n%s %d %f", e.name, e.age, e.bs);

	fclose(fp);
}
