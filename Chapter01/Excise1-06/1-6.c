#include <stdio.h>

main()
{
	int c;
	/*EOF为end of file的缩写，叫文本结束，
		用来解决区分文件中有效数据与输入结束符（ctrl+z）的问题*/
	while (c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d - at EOF\n", c);

	getchar();
	return 0;
}