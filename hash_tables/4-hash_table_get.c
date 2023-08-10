#include "hash_tables.h"

/**
 * hash_table_get - function that retrieves a value associated with a key
 * @ht: hash table to look into
 * @key: key we search
 * Return: value associate to the element or NULL if key can't be found
*/

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *current = NULL;

	if (ht == NULL || key == NULL || strcmp(key, "") == 0)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	current = ht->array[index];

	while (current != NULL)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
