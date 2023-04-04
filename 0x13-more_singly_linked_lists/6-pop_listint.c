#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - deletes the head node of a linked list
 * @head: double pointer to the head node
 *
 * Return: the value of the deleted node's integer, or 0 if the list is empty
 */

int pop_listint(listint_t **head)
{
	int n = 0;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (n);
	}

	temp = *head;
	*head = temp->next;
	n = temp->n;
	free(temp);

	return (n);
}
