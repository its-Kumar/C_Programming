#include <stdio.h>

void main()
{
	int a,b,c;
	printf("Combinations of 1, 2 and 3 are:");
	for(a=1;a<=3;a++){
		for(b=1;b<=3;b++){
			for(c=1;c<=3;c++){
				if(a!=b&&b!=c&&c!=a)
				printf("\n  %d%d%d",a,b,c);
			}
		}
	}
}

