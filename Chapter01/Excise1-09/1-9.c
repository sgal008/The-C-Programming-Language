#include <stdio.h>

#define NONBLANK 'a'

/*replace string of blanks with a single blank*/
main()
{
	int c, lastc;

	lastc = NONBLANK;
	while ((c = getchar()) != EOF)
	{
		if (c != ' ')
			putchar(c);
		if (c == ' ')
			if (lastc != ' ')//再次碰到空格，由于第一个空格已输出，lastc为空格(' ')，空格就不输出了
				putchar(c);
		lastc = c;//当碰到第一个空格时，输出并记录在lastc中
	}

	getchar();
	return 0;
}