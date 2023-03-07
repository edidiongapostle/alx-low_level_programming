#include "main.h"

/** _memset - a function that fills memory with a constant byte
 * @s: the constant in byte
 *
 * @n: bte of the memory area pointed by s
 *
 * @b: pointer of the memory area
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	char *c = s;

	while (n--)
	{
		*c++ = b;
	}
	return (s);
}
