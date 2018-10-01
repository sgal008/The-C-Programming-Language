#include <stdio.h>

main()
{
	printf("开始实践C语言\c");//如果反斜杠(\)后面的不是转义字符则忽略\输出该字母
	printf("开始实践C语言\7");

	getchar();
	return 0;
}