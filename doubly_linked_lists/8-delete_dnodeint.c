#include "lists.h"

/**
 * delete_dnodeint_at_index - function that deletes the node at index
 * @head: pointer to pointer to head node
 * @index: index of the node that should be deleted, start at 0
 * Return: 1 if it succeeded or -1 it it failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *present = *head;
	unsigned int count;

	count = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	if (index == 0)
	{
		*head = present->next;
		if (present->next != NULL)
			present->next->prev = NULL;
		free(present);
		return (1);
	}
	while (present != NULL)
	{
		if (count == index)
		{
			present->prev->next = present->next;
			if (present->next != NULL)
				present->next->prev = present->prev;
			free(present);
			return (1);
		}
		count++;
		present = present->next;
	}
	return (-1);
}
