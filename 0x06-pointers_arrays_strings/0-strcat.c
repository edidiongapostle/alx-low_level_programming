#include "main.h"

/**
 * _strncat - A function that concatenated two strings
 * @dest: the string destination
 * @src: the source
 * @n: number of strings
 *
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	char *s = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (s);
}
