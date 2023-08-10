#include "hash_tables.h"

/**
 * hash_table_delete - function that deletes a hash table
 * @ht: the hash table we want to delete
*/

void hash_table_delete(hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current = NULL;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;

	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			temp = current;
			current = current->next;
			free(temp->key);
			free(temp->value);
			free(temp);
		}
	}
	free(ht->array);
	free(ht);
}
