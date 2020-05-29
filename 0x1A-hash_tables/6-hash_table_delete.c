
#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 * Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temporal = NULL;
	hash_node_t *prev = NULL;
	unsigned long int i;

	if (ht == NULL)
		return;
	for (i = 0; i < ht->size; i++)
	{
		temporal = ht->array[i];
		while (temporal != NULL)
		{
			prev = temporal;
			free(temporal->key);
			free(temporal->value);
			temporal = temporal->next;
			free(prev);
		}
	}
	free(ht->array);
	free(ht);
}
