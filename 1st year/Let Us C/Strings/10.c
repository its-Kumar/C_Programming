//A look-alike of the function strlen()
#include<stdio.h>

main()
{
	char source[]="Sayonara";
	char target[20];
	
	strcpy(target,source);
	printf("\nSource String = %s", source);
	printf("\nTarget String = %s", target);
}
