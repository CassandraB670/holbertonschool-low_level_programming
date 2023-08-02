#include "lists.h"

/**
 * print_dlistint - function that prints all the element of a list
 *
 * @h: pointer to the head node
 *
 * Return: the number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *present = h;
	size_t count;

	count = 0;

	while (present != NULL)
	{
		printf("%d\n", present->n);
		present = present->next;
		count++;
	}
	return (count);
}
