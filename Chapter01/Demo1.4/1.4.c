#include <stdio.h>

#define LOWER 0		/*	�������		*/
#define UPPER 300	/*	�������		*/
#define STEP 20		/*	����		*/
/*	#define ���� �滻�ı�
	#defineָ����԰ѷ����������Ϊ���ų���������Ϊһ���ض����ַ���
	ָ�����û�зֺ�*/
main()
{
	/*	��ӡ�����¶�-�����¶ȶ��ձ�	*/
	int fahr;

	for (fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP)
		printf("%3d %6.1f\n", fahr, (5.0 / 9.0)*(fahr - 32));

	getchar();
	return 0;
}