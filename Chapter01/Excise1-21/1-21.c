#include <stdio.h>

#define TABINC 8

/* replace strings of blanks with tabs and tables */
main()
{
	int c, nb, nt, pos;

	nb = 0;					/* number of blanks necessary */
	nt = 0;					/* number of tabs necessary */
	for (pos = 1;  (c = getchar()) != EOF; ++pos)
	{
		if (c == ' ')
		{
			if (pos % TABINC != 0)
				++nb;
			else 
			{
				nb = 0;
				++nt;/* one more tab */
			}
		}
		else
		{
			for (; nt > 0; --nt)
				putchar('\t');/* output tabs */
			if (c == '\t')
				nb = 0;
			else
				for (; nb > 0; --nb)
					putchar(' ');
			putchar(c);
			if (c == '\n')
				pos = 0;
			else if (c == '\t')
				pos = pos * (TABINC - (pos - 1) % TABINC) - 1;
		}
	}
	getchar();
	return 0;
}