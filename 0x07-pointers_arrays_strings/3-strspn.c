#include "main.h"
/**
 * _strspn - function that gets the length of a prefix substring
 *
 * @s: pointer
 *
 * @accept: pointer
 *
 * Return: number of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k;

	k = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0' && s[i] != accept[j]; j++)
			if (accept[j] == '\0')
			{
				return (k);
			}
		k++;
	}
	return (k);

}
