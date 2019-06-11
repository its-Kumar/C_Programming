//recieves records from keyboard and writes them to a file in binary mode
#include<stdio.h>
main()
{
	FILE *fp;
	char another='y';
	struct emp
	{
	char name[40];
	int age;
	float bs;
	};
	struct emp e;
	
	fp=fopen("Emp.dat", "wb");
	
	if(fp==NULL)
	{
		puts("Cannot open file.");
		exit(0);
	}
	while(another=='y')
	{
		printf("\nEnter name, age and basic salary:");
		scanf("%s %d %f", e.name, &e.age, &e.bs);
		fwrite(&e,sizeof(e), 1, fp);
		printf("Add another record(y/n):");
		fflush(stdin);
		another=getche();
	}
	fclose(fp);
}
