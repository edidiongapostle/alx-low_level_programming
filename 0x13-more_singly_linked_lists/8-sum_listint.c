#include "lists.h"

/**
 * sum_listint - a function that returns the sum of all the
 * data (n) of a listint_t linked list
 *
 * @head: pointer to the head of the linked list
 *
 * Return: 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	for (listint_t *node = head; node != NULL; node = node->next)
	{
		sum += node->n;
	}
	return (sum);
}
