#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 *
 * @n: the number to print
 *
 * Return: 0
 */

void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << 63;
	int printed = 0;

	if (n == 0)
	{
		putchar('0');
		return;
	}

	while (mask)
	{
		if (n & mask)
		{
			putchar('1');
			printed = 1;
		}
		else if (printed)
		{
			putchar('0');
		}
		mask >>= 1;
	}
}
