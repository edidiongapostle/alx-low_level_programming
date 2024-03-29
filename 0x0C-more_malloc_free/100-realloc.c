#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _realloc -  a function that reallocates a memory block using malloc and free
 *
 * @ptr: Pointer to the memory previously allocated with a call to malloc
 *
 * @old_size: Size, in bytes, of the allocated space for ptr
 *
 * @new_size: New size, in bytes, of the new memory block
 *
 * Return: Pointer to the reallocated memory block
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *old_ptr;
	unsigned int i;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	old_ptr = ptr;
	for (i = 0; i < old_size && i < new_size; i++)
	{
		new_ptr[i] = old_ptr[i];
	}

	free(ptr);

	return (new_ptr);
}
