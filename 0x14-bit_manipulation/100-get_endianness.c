#include "main.h"
/**
 *get_endianness - function that checks the endianness
 *
 *Return: 0 if big endian, and 1 if little endian
 */

int get_endianness(void)
{
	int eddy;
	char *c;

	eddy  = 1;
	c = (char *)&eddy;

	if (*c == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
