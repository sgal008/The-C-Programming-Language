#include <stdio.h>

/* expand: expand shorthand notation in s1 into string s2 */
void expand(char s1[], char s2[])
{
	char c;
	int i, j;

	i = j = 0;
	while ((c = s1[i++]) != '\0')  /* fetch a char from s1[] */
		if (s1[i] == '-' && s1[i+1] >= c)  /* 控制输出小于c的值 */
		{
			i++;
			while (c < s1[i])  /* expand shorthand */
				s2[j++] = c++;  // 赋值a-y，此时c=z，i=2
		}
		else                              /* 控制输出c */
		{						// 赋值z
			s2[j++] = c;      /* copy the character */
		}
	s2[j] = '\0';
}

int main()
{
	//char s1[24] = "a-z";
	//char s1[24] = "a-b-c";
	//char s1[24] = "0-9";
	char s1[24] = "a-z0-9";
	//char s1[24] = "A-Z";
	char s2[24];
	expand(s1, s2);
	printf(s2);

	getchar();
	return 0;
}