#include "main.h"
/**
 * set_bit - function sets value of bit to 1 at given index
 *
 * @n: pointer to the number to be modified
 *
 * @index: index of the bit to be modified
 *
 * Return: 1 on success or -1 if error occurs
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int res;
	unsigned long int m;

	res = 1;
	m = index;

	if (m >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	res = res << m;
	*n = *n | res;

	return (1);
}
