#include "main.h"
#include <stddef.h>
/**
 * _strpbrk - function that searches a string for any of a set of bytes
 *
 * @s:first occurrence in the string
 *
 * @accept: matches one of the bytes, or @NULL if no such byte
 *
 * Return: pointer to the byte
 */

char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; *(accept + j); j++)
		{
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	return (NULL);
}
