#include <stdio.h>

void in_comment(void);
void echo_quote(int c);
void rcomment(int c);

/* remove alll comments from a valid c program */
main()
{
	int c, d;

	while ((c = getchar()) != EOF)
		rcomment(c);

	getchar();
	return 0;
}

/* in_comment: inside of a valid comment */
void in_comment(void)
{
	int c, d;
	c = getchar();			/* prev character */
	d = getchar();			/* curr character */
	while (c != '*' || d != '/')	/* search for end */
	{
		c = d;
		d = getchar();
	}
}

/* echo_quote: echo characters within quotes */
void echo_quote(int c)
{
	int d;

	putchar(c);
	while ((d = getchar()) != c)	/* search for end */
	{
		putchar(d);
		if (d = '\\')
			putchar(getchar());		/* ignore escape seq */
	}
	putchar(d);
}

/* rcomment: read each character, remove the comments */
void rcomment(int c)
{
	int d;

	if (c == '/')
		if ((d = getchar()) == '*')
			in_comment();		/* beginning comment */
		else if (d == '/') {
			putchar(c);			/* another slash */
			rcomment(d);
		}
		else {
			putchar(c);
			putchar(d);
		}
	else if (c == '\'' || c == '"')
		echo_quote(c);		/* quote begins */
	else
		putchar(c);			/* not a comment */
}