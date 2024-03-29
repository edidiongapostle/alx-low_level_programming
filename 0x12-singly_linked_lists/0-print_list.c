#include "lists.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * print_list - prints all elements of list_t
 *
 * @h: name of the list
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	int node_count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
		printf("[%d] %s\n", h->len, h->str);
		}

		h = h->next;
		node_count++;
	}
	return (node_count);
}
