#include "hash_tables.h"
/**
 * hash_table_print - add elemento to hash table
 * @ht: the has table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i = 0;
	int first = 1;
	hash_node_t *temp = NULL;

	if (ht == NULL)
		return;
	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			while (temp)
			{
				if (first == 0)
				{
					printf(", ");
					printf("'%s': '%s'", temp->key, temp->value);
				}
				else
				{
					printf("'%s': '%s'", temp->key, temp->value);
					first = 0;
				}
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
