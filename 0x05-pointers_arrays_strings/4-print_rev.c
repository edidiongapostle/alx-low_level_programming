#include "main.h"

/**
 * print_rev - a funtion that prints a string in reverse
 * @s: the string to be in reverse
 * Return: 0
 */

void print_rev(char *s)
{
	int len = strlen(s);

	for (int i = len - 1; i >= 0; i--)
	{
		printf("%c", s[i]);
	}
	printf("\n");
}
