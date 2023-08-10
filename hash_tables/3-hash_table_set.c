#include "hash_tables.h"

/**
 * hash_table_set - function that adds an element to the ash table
 * @ht: hash table we want to add or update the key/value to
 * @key: the key that can't be an empty string
 * @value: value associated to the key
 * Return: 1 if success or 0 if failure
*/

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	int index;
	hash_node_t *newNode = NULL;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || value == NULL || strcmp(key, "") == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			if (current->value == NULL)
				return (0);
			return (1);
		}
		current = current->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);
	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if (newNode->value == NULL)
	{
		free(newNode->key);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[index];
	ht->array[index] = newNode;
	return (1);
}
