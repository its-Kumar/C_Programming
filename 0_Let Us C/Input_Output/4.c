#include <stdio.h>

main()
{
	char ch = 'z';
	int i = 125;
	float a = 12.55;
	char s[] = "Hello there!";

	printf("\n%c %d %f", ch, ch, ch);
	printf("\n%s %d %f", s, s, s);
	printf("\n%c %d %f", i, i, i);
	printf("\n%f %d\n", a, a);
}
