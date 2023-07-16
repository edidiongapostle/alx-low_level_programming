#include "main.h"
/**
 *print_binary - function that prints the binary rep. of a number
 *
 *@n: number to printed in binary
 *
 *Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int val;
	int elim;

	elim = 1;
	val = 1UL << (sizeof(unsigned long int) * 8 - 1);

	while (val)
	{
		if (n & val)
		{
			elim = 0;
			_putchar('1');
		}
		else if (!elim)
		{
			_putchar('0');
		}
	val = val >> 1;
	}
	if (elim)
	{
		_putchar('0');
	}
}
