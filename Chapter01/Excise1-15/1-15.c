#include <stdio.h>

float celsius(float fahr);

/* print Fahrenheit-Celsius table */
main()
{
	float fahr;
	int lower, upper, step;

	lower = 0;			/* lower limit of temperature table */
	upper = 300;		/* upper limmit */
	step = 20;			/* step size */

	fahr = lower;
	while (fahr <= upper)
	{
		printf("%3.0f %6.1f\n", fahr, celsius(fahr));
		fahr = fahr + step;
	}

	getchar();
	return 0;
}

/* celsius: convert fahr into celsius */
float celsius(float fahr)
{
	return (5 / 9.0) * (fahr - 32.0);
}