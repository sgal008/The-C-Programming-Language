#include <stdio.h>

main()
{
	int c;
	/*EOFΪend of file����д�����ı�������
		������������ļ�����Ч�����������������ctrl+z��������*/
	while (c = getchar() != EOF)
		printf("%d\n", c);
	printf("%d - at EOF\n", c);

	getchar();
	return 0;
}