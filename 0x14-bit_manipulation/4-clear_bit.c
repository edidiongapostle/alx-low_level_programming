#include "main.h"
/**
 * clear_bit - function sets value of bit at given index to 0
 *
 * @n: pointer to the number to be modified
 *
 * @index: index of bit to be modified
 *
 * Return: returns 1 on success or -1 if an error occurs
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res = 1;
	unsigned int m = index;

	if (m >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	res <<= m;
	res = ~res;
	*n &= res;

	return (1);
}
