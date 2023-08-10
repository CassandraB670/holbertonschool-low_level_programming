#include "lists.h"

/**
 * print_list - print all the elements of a list_t list
 *
 * @h: Pointer to the head node
 *
 * Return: thumber of nodes or [0] (nil)
 */

size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		count++;
	}
	return (count);
}