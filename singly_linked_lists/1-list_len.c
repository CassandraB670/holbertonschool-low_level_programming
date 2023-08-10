#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 *
 * @h: Pointer to the head node
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t count;

	count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
