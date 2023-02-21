#include "main.h"

/**
 * print_alphabet_x10 - A function that prints 10 times the alphabet
 * Return: Always 0.
 */

void print_alphabet_x10(void)
{
	int count = 0;
	char alph;

	while (count++ <= 9)
	{
		for (alph = 'a'; alph <= 'z'; alph++)
			_putchar(alph);
		_putchar('\n');
	}
}
