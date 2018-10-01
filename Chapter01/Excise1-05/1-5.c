#include <stdio.h>
/*	打印华氏温度转换为摄氏温度，以逆序输出	*/
main()
{
	int fahr;
	for (fahr = 300; fahr >= 0; fahr = fahr - 20)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));

	getchar();
	return 0;
}