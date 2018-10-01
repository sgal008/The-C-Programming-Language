#include <stdio.h>

/*replace tabls and backspace with visible charactes*/
main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c == '\t')
			printf("\\t");
		else if (c == '\b')
			printf("\\b");
		else if (c == '\\')
			printf("\\\\");
		else
			putchar(c);
	}

	getchar();
	return 0;
}