#include <stdio.h>

#define LOWER 0		/*	表的下限		*/
#define UPPER 300	/*	表的上限		*/
#define STEP 20		/*	步长		*/
/*	#define 名字 替换文本
	#define指令可以把符号名（或称为符号常量）定义为一个特定的字符串
	指令后面没有分号*/
main()
{
	/*	打印华氏温度-摄氏温度对照表	*/
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));

	getchar();
	return 0;
}