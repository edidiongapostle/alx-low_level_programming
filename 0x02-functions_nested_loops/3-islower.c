#include "main.h"

/**
 * _islower - A functiom that checks for lowercase character
 *@c: parameter to checked
 * Return: 1 if it is an alphabet and 0 otherwise
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
