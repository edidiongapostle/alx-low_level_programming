#include "main.h"
#include <stdlib.h>

/**
 * array_range - a function that creates an array of integers
 *
 * @min: Minimum value of the array
 *
 * @max: Maximum value of the array
 *
 * Return: Pointer to the newly created array
 */

int *array_range(int min, int max)
{
	int *array;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;
	array = malloc(size * sizeof(int));
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = min++;

	return (array);
}
