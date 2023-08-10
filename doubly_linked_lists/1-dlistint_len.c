#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 *
 * @h: pointer to the head node
 *
 * Return: number of elements in a linked list
 */

size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *present = h;
	size_t count;

	count = 0;

	while (present != NULL)
	{
		count++;
		present = present->next;
	}
	return (count);
}
