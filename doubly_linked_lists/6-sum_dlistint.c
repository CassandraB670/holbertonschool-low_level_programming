#include "lists.h"

/**
 * sum_dlistint - function that returns the sum of all the data
 *
 * @head: pointer to the head node
 *
 * Return: sum of all the data or 0
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;
	dlistint_t *present = head;

	while (present != NULL)
	{
		sum += present->n;
		present = present->next;
	}
	return (sum);
}
