//formatted disk I/O function
#include "stdio.h"
main()
{
	FILE *fp;
	char another='Y';
	char name[40];
	int age;
	float bs;
	
	fp=fopen("employee.dat", "w");
	if(fp==NULL)
	{
		puts("Cnnot open file.");
		exit(0);
	}
	while(another=='Y')
	{
		printf("\nEnter name, age and basic salary\n");
		scanf("%s %d %f", name, &age, &bs);
		fprintf(fp, "%s %d %f\n", name, &age, &bs);
		
		printf("Another employee(Y/N)");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
}
