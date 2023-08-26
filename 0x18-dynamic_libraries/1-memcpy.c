#include "main.h"

/**
 * _memcpy - a function that copies memory area
 *
 * @dest: destination memory area
 *
 * @src: source memory area
 *
 * @n: number of bytes to copy
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
		i++;
	{
		dest[i] = src[i];
	}

	return (dest);
}