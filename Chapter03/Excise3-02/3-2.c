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
            break;    /* 注意这里有个break，我当时就少了这个break */
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
    printf(s);  /* 这里已经转换成 hello\\nHi\\t 输出 hello\nHi\t， 直接对hello\nHi\t输出的话会hello换行Hi[Tab缩进] */

    printf("\n--------------\n");

    char s2[100];
    char t2[100] = "hello\\nHi\\t\\a";  /* 读取的时候\\被认为是一个字符 */
    unescape(s2, t2);
    printf(s2);

    getchar();
    return 0;
}