//A look-alike of the function strlen()
#include <stdio.h>

main()
{
	char source[] = "Sayonara";
	char target[20];

	xstrcpy(target, source);
	printf("\nSource String = %s", source);
	printf("\nTarget String = %s", target);
}
xstrcpy(char *t, char *s)
{
	while (*s != '\0')
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}
