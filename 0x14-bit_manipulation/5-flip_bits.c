#include "main.h"
/**
 * flip_bits - returns number of bits needed to flip
 *
 * @n: first number flip
 *
 * @m: second number flip
 *
 * Return: number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int var;
	unsigned int j;
	unsigned long int i;

	j = 0;
	var = n ^ m;
	i = 0;

	while (i < sizeof(unsigned long int) * 8)
	{
		if (var & (1UL << i))
		j++;
		i++;
	}

	return (j);
}
