#include<stdio.h>
void main()
{
	int year;
	void roman(int);
	printf("Enter the Year:\n");
	scanf("%d",&year);
	roman(year);
}
void roman(int y)
{
	int i,d;
	d=y/1000;
	y=y%1000;
	for(i=1;i<=d;i++)
		printf("m");
	d=y/500;
	y=y%500;
	for(i=1;i<=d;i++)
		printf("d");
	d=y/100;
	y%=100;
	for(i=1;i<=d;i++)
		printf("c");
	d=y/50;
	y%=50;
	for(i=1;i<=d;i++)
		printf("l");
	d=y/10;
	y%=10;
	for(i=1;i<=d;i++)
		printf("x");
	d=y/5;
	y%=5;
	for(i=1;i<=d;i++)
		printf("v");
	for(i=1;i<=y;i++)
		printf("i");	
}
