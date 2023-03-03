#include "main.h"
#include <string.h>
#include <stdlib.h>

/**
 * leet - a function that encodes a string into 1337
 *@str: string
 * Return: str
 */

char *leet(char *str)
{
	char *result = malloc(strlen(str) + 1);
	char *p = result;

	for (; *str != '\0'; str++, p++)
	{
		if (*str == 'a' || *str == 'A')
		{
			*p = '4';
		}
		else if (*str == 'e' || *str == 'E')
		{
			*p = '3';
		}
		else if (*str == 'o' || *str == 'O')
		{
			*p = '0';
		}
		else if (*str == 't' || *str == 'T')
		{
			*p = '7';
		}
		else if (*str == 'l' || *str == 'L')
		{
			*p = '1';
		}
		else
		{
			*p = *str;
		}
	}

	return (str);
}
