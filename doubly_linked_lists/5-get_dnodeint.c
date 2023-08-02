#include "lists.h"

/**
 * get_dnodeint_at_index - function that returns the nth node of a linked list
 *
 * @head: pointer to the head node
 *
 * @index: index of the node, starting from 0
 *
 * Return: NULL or the nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *present = head;
	unsigned int count;

	count = 0;

	while (present != NULL)
	{
		if (count == index)
			return (present);
		present = present->next;
		count++;
	}
	return (NULL);
}
