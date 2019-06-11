#include<stdio.h>

int main()
{
	float cp, sp, pr, ls;
	
	printf("Enter the cost price & selling price of an item:	");
	scanf("%f%f",&cp,&sp);
	
	if(cp<=sp)
	{
		pr=sp-cp;
		printf("seller made profit of %f.",pr);
	}
	else
	{
		ls=cp-sp;
		printf("seller incurred loss of %f.",ls);
	}
	return 0;
}
