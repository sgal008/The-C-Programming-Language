#include <stdio.h>

int any(char s1[], char s2[])
{
	int i, j;

	for (i = 0; s1[i] != '\0'; i++)
		for (j = 0; s2[j] != '\0'; j++)
			if (s1[i] == s2[j])               /* match found? */
				return i;                     /* location first match */
		return -1;                            /* otherwise, no match */
}

main()
{
	char s1[] = { 'h','e','l','l','o','\0' };
	char s2[] = { 'a','o','\0' };
	int result = any(s1, s2);
	printf("%d", result);

	getchar();
	return 0;
}