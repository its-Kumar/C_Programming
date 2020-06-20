#include <stdio.h>

int main()
{
	FILE *fp;
	char name[10];
	fp = fopen("Easy.txt", "w");
	fgets(name, 10, fp);
	strcpy(name, "Easytut4U");
	fputs(name, fp);
	fclose(fp);
}
