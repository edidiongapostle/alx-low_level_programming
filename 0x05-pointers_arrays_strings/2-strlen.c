#include "main.h"

/**
 * _strlen - a function that returns the length of a string
 * @s: string to be checked
 * Return: 0
 */

int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
