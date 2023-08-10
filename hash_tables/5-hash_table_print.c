#include "hash_tables.h"

/**
 * hash_table_print - function that prints a hash table
 * @ht: hash table we want to print
*/

void hash_table_print(const hash_table_t *ht)
{
	unsigned long int index;
	hash_node_t *current = NULL;
	int flag = 0;

	if (ht == NULL)
		return;

	printf("{");
	for (index = 0; index < ht->size; index++)
	{
		current = ht->array[index];
		while (current != NULL)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key, current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
