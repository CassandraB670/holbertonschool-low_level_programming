#include "lists.h"
#include <stdlib.h>

/**
 * free_list - function that frees a list
 *
 * @head: pointer to the head node
 */

void free_list(list_t *head)
{
	list_t *present;
	list_t *next;

	present = head;

	while (present != NULL)
	{
		next = present->next;
		free(present->str);
		free(present);
		present = next;
	}
}
