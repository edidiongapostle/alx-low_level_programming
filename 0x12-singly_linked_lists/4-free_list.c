#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
 * free_list - frees a list_t list
 * @head: pointer to the head of the list
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *new;

	while (head != NULL)
	{
		new = head;
		head = head->next;
		free(new->str);
		free(new);
	}
}
