#include "function_pointers.h"
/**
  * int_index - afuntion that searches for an integer
  *
  * @array: array to search
  * @size: number of elements in the array
  * @cmp: pointer to the funtion to be used to comapare values
  *
  * Return:void
  */

int int_index(int *array, int size, int (*cmp)(int))
{
	int ctr = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (ctr < size)
			{
				if (cmp(array[ctr]))
					return (ctr);

				ctr++;
			}
		}
	}

	return (-1);
}
