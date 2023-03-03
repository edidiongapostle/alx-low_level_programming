#include "main.h"

/**
 *string_toupper - a function that changes lowercase to uppercase
 *
 *@str: string
 *
 *Return: char
 */

char *string_toupper(char *str)
{
	char *s = str;

	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
		*s = *s - 'a' + 'A';
		}
	s++;
	}
	return (str);
}
