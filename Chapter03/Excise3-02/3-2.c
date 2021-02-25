#include <stdio.h>

/* escape: expand newline and tab into visible sequences */
/*         while copying the string t to s */
void escape(char s[], char t[])
{
	int i, j;

	for (i = j = 0; t[i] != '\0'; i++)
		switch (t[i])
		{
			case '\n':               /* newline */
				s[j++] = '\\';
				s[j++] = 'n';
				break;
			case '\t':              /* tab */
				s[j++] = '\\';
				s[j++] = 't';
				break;
			default:                /* all other chars */
				s[j++] = t[i];
				break;
		}
	s[j] = '\0';
}

int main()
{
	char s[100];
	char t[100] = "hello\nHi\t";
	escape(s, t);
	printf(s);  /* �����Ѿ�ת���� hello\\nHi\\t ��� hello\nHi\t�� ֱ�Ӷ�hello\nHi\t����Ļ���hello����Hi[Tab����] */

	getchar();
	return 0;
}