#include "lists.h"

/**
 * free_dlistint - function that frees a list
 *
 * @head: pointer to the head node
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *present;

	while (head != NULL)
	{
		present = head;
		head = head->next;
		free(present);
	}
}
