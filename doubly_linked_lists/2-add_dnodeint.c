#include "lists.h"

/**
 * add_dnodeint - adds a new node at the beggining of a list
 *
 * @head: pointer to pointer to the head node
 *
 * @n: value of the new node
 *
 * Return: NULL or address of the new element
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node = malloc(sizeof(dlistint_t));

	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->prev = NULL;
	new_node->next = *head;

	if (*head != NULL)
		(*head)->prev = new_node;

	*head = new_node;
	return (new_node);
}
