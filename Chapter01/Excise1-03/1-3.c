#include <stdio.h>

/*	��fahr=0,20,...,300ʱ����ӡ�����϶������϶��¶ȶ��ձ�;
		�������汾	*/
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/*	�¶�	�������		*/
	upper = 300;	/*	�¶�	�������		*/
	step = 20;		/*	����		*/

	fahr = lower;
	printf("ʹ�ù�ʽ��=(5/9)*(�H-32)��ӡ�����¶��������¶ȶ��ձ�\n");/*���Լ��ӵ�*/
	printf("Fahr  Celsius\n");
	while (fahr <= upper)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%3.0f %6.1f\n", fahr, celsius);
		fahr = fahr + step;
	}

	getchar();
	return 0;
}