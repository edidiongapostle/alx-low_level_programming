#include <stdio.h>
#include <stdlib.h>

/**
 * main - A progam that finds and prints the largest
 * prime facor of the number 612852475143
 *
 * Return: 0
 */

int main(void)
{
	long num = 612852475143;
	long divisor = 2;
	long larg_prim = 0;

	while (num != 1)
	{
		if (num % divisor == 0)
		{
			num = num / divisor;
			larg_prim = divisor;
		}
		divisor += 1;
	}
	printf("%ld\n", larg_prim);
	return (0);
}
