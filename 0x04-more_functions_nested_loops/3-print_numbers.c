#include "main.h"

/**
*print_numbers - a function that prints the numbers from 0-9
* owned by Bwave ICT
*Return: void
*/

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
	_putchar(c);
	}
	_putchar('\n');
}
