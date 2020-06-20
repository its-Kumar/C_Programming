//A look-alike of the function strlen()
#include <stdio.h>

main()
{
	char source[] = "Folks!";
	char target[30] = "Hello ";

	xstrcat(target, source);
	printf("\nSource string = %s", source);
	printf("\nTarget string = %s", target);
}
xstrcat(char *t, char *s)
{
	while (*t != '\0')
		t++;
	while (*s != '\0')
	{
		*t = *s;
		s++;
		t++;
	}
	*t = '\0';
}
