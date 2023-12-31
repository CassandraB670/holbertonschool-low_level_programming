#include "lists.h"

/**
 * add_dnodeint_end - adds a new node eat the endof a list
 *
 * @head: pointer to pointer to the head node
 *
 * @n: value of the new node
 *
 * Return: NULL or address of the new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *present = *head;

		while (present->next != NULL)
			present = present->next;

		present->next = new_node;
		new_node->prev = present;
	}
	return (new_node);
}
