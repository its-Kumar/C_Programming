#include "stdio.h" <+>
main()
{
	char ch;
	while((ch=getc(stdin))!=EOF)
		putc(ch,stdout);
}
