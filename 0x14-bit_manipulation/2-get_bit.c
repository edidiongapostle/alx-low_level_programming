#include "main.h"
/**
 *get_bit - function returns value of bit at given index
 *
 *@n: unsigned long int number
 *
 *@index: bit index being checked
 *
 *Return: value of bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int p;
	unsigned long int res;
	int val;

	p = index;

	if (sizeof(unsigned long int) * 8 <= p)
	{
		return (-1);
	}
	res = 1UL << p;
	val = (n & res) != 0;
	return (val);
}
