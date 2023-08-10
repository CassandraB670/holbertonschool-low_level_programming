#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a new node at a given position
 * @h: pointer to pointer to the head node
 * @idx: index of the list, start at 0
 * @n: value to the new node
 * Return: address of the new node or NULL
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	dlistint_t *present = *h;

	unsigned int count = 0;

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = NULL;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
	{
		new_node->next = *h;
		if (*h != NULL)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	while (present != NULL)
	{
		if (count == idx - 1)
		{
			new_node->next = present->next;
			if (present->next != NULL)
				present->next->prev = new_node;
			present->next = new_node;
			new_node->prev = present;
			return (new_node);
		}
		count++;
		present = present->next;
	}
	return (NULL);
}
