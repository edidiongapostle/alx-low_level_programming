#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 *
 * @head: pointer to the first node of the linked list
 * @index: index of the node to return
 *
 * Return: NULL if it does not exist
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;
	listint_t *current;

	if (head == NULL)
	{
		return (NULL);
	}
	current = head;

	for (i = 0; i < index; i++)
	{
		if (current->next == NULL)
		{
			return (NULL);
		}
		current = current->next;
	}
	return (current);
}
