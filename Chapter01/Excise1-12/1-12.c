#include <stdio.h>
#define IN 1		/*inside a word*/
#define OUT 2		/*outside a word*/

/*print input one word per line*/
main()
{
	int c, state;

	state = OUT;
	while ((c = getchar()) != EOF)
	{
		if (c == ' ' || c == '\n' || c == '\t')
		{
			if (state == IN)
			{
				putchar('\n');/*finish the word*/
				state = OUT;
			}
		}
		else if (state == OUT)
		{
			state = IN;
			putchar(c);/*beginning of word*/
		}
		else /*inside a word*/
			putchar(c);
	}

	getchar();
	return 0;
}