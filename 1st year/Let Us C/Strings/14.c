//A look-alike of the function strlen()
#include<stdio.h>

main()
{
	char source[]="Folks!";
	char target[30]="Hello ";
	
	strcat(target, source);
	printf("\nSource string = %s", source);
	printf("\nTarget string = %s", target);
}
