#include <stdio.h>
/*	��ӡ�����¶�ת��Ϊ�����¶ȵ�ת����
	��celsius=0,20,...,300ʱ���������汾*/
main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;		/*	�¶ȱ������		*/
	upper = 300;	/*	�¶ȱ������		*/
	step = 20;		/*	����		*/

	printf("Celsius  Fahr\n");
	celsius = lower;
	while (celsius < upper)
	{
		fahr = (9.0*celsius) / 5.0 + 32.0;
		printf("%3.0f  %6.1f\n", celsius, fahr);
		celsius = celsius + step;
	}

	getchar();
	return 0;
}