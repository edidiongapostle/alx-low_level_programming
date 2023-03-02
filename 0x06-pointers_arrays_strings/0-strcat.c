#include "main.h"

/**
 * _strncat - A function that concatenated two strings
 * @dest: the string destination
 * @src: the source
 * @n: number of strings
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;

	while (*dest_end != '\0')
	{
		dest_end++;
	}
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_end[i] = src[i];
	}
	dest_end[i] = '\0';

	return (dest);
}
