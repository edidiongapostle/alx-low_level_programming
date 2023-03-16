#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _calloc - a function that allocates memory for an array, using malloc
 *
 * @nmeb: number of elements in the array
 *
 * @size: size of each element
 *
 * Return: pointer to the allocated memory
 */

void *_calloc(unsigned int nmeb, unsigned int size)
{
	void *p;

	if (nmeb == 0 || size == 0)
		return (NULL);

	p = malloc(nmeb * size);
	if (p == NULL)
		return (NULL);

	memset(p, 0, nmeb * size);

	return (p);
}
