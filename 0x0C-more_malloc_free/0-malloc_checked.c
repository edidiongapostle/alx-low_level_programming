#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - a function that allocates memory using malloc
 *
 * @b: Number of bytes to allocate
 *
 * Return: Pointer to the allocated memory if malloc fails,
 * terminates the process with status value 98
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);
	return (i);
}
