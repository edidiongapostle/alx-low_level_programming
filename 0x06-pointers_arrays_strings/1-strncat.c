#include "main.h"

/**
 * _strncat - a function that concatenates two strings
 * @dest: destination
 * @src: source
 * @n: length of the integers
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	char *dest_end = dest;
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest_end[i] = src[i];
	}
	dest_end[i] = '\0';

	return (dest);
}
