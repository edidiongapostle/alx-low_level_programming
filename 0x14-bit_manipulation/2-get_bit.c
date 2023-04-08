#include "main.h"

/**
 * get_bit -gets the value of a bit at a given index
 *
 * @n: the number to get the nit from
 *
 * @index: the index of the bit to get
 *
 * Return: the value of the bit atindex or -1 if error occurrred
 */

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
