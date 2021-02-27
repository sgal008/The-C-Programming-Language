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

/* unescape: convert escape sequences into real characters */
/*           while copying the string t to s */
void unescape(char s[], char t[])
{
    int i, j;

    // if-else,switch
    //for (i = j = 0; t[i] != '\0'; i++)
    //	if (t[i] != '\\')
    //		s[j++] = t[i];
    //	else                    /* it is a backslash */
    //		switch (t[++i])
    //		{
    //		case 'n':           /* real newline */
    //			s[j++] = '\n';
    //			break;
    //		case 't':           /* real tab */
    //			s[j++] = '\t';
    //			break;
    //		default:			/* all other chars */
    //			s[j++] = '\\';
    //			s[j++] = t[i];
    //			break;
    //		}

    // switch nested switch
    for (i = j = 0; t[i] != '\0'; i++)
        switch (t[i])
        {
        case '\\':       /* backslash */
            switch (t[++i])
            {
            case 'n':           /* real newline */
                s[j++] = '\n';
                break;
            case 't':           /* real tab */
                s[j++] = '\t';
                break;
            default:			/* all other chars */
                s[j++] = '\\';
                s[j++] = t[i];
                break;
            }
            break;    /* ע�������и�break���ҵ�ʱ���������break */
        default:           /* not a backslash */
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

    printf("\n--------------\n");

    char s2[100];
    char t2[100] = "hello\\nHi\\t\\a";  /* ��ȡ��ʱ��\\����Ϊ��һ���ַ� */
    unescape(s2, t2);
    printf(s2);

    getchar();
    return 0;
}