#include "main.h"

/**
 * binary_to_uint - a function that converts a binary number to an unsigned int
 *
 * @b: pointer to the binary string
 *
 * Return: 0 if character is invalid
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;
	int string_length = 0;

	if (b == NULL)
		return (0);

	while (b[string_length])
	{
		if (b[string_length] != '0' && b[string_length] != '1')
			return (0);
		string_length++;
	}

	while (*b)
	{
		res <<= 1;
		if (*b == '1')
			res += 1;
		b++;
	}

	return (res);
}
