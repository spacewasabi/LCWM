/**
 * Exercice sur les conversions de températures
 * Voir : https://github.com/Eidonko/ccourse/blob/master/ccourse.pdf && 
 */

#include <stdio.h>
int main()
{
	int inf = 0, sup = 300, step = 20;
	float fahr, celsius;

	fahr = inf;
	while (fahr <= sup)
	{
		celsius = (5.0 / 9.0) * (fahr - 32.0);
		printf("%4.0f°F = %6.1f°C\n", fahr, celsius);
		fahr = fahr + step;
	}

	return 0;
}
