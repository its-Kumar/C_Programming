#include <dos.h>
cls()
{
	union REGS i, o;

	i.h.ah = 6;
	i.h.al = 0;
	i.h.ch = 0;
	i.h.cl = 0;
	i.h.dh = 24;
	i.h.dl = 79;
	i.h.bh = 7;
	int86(16, &i, &o);
}
gotorc(int r, int c)
{
	union REGS i, o;

	i.h.ah = 2;
	i.h.bh = 0;
	i.h.dh = r;
	i.h.dl = c;
	int86(16, &i, &o);
}
