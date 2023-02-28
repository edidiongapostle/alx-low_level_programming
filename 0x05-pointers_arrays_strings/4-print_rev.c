#include "main.h"
#include <string.h>

/**
 * print_rev - a funtion that prints a string in reverse
 * @s: the string to be in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int n;
	int m;

	m = 0;
	while (s[m] != '\0')
		m++;

	for (n = m - 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}
