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
			if (lastc != ' ')//�ٴ������ո����ڵ�һ���ո��������lastcΪ�ո�(' ')���ո�Ͳ������
				putchar(c);
		lastc = c;//��������һ���ո�ʱ���������¼��lastc��
	}

	getchar();
	return 0;
}