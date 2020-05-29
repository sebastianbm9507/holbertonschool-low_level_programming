#include "hash_tables.h"

/**
 * hash_table_create -Function that creates a hash table
 * @size: unsigned long int parameter that indicates the size of table
 * Return: Pointer to new hash table
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *ht = NULL;
	unsigned long int i;
	/* creates the table */
	ht = malloc(sizeof(hash_table_t) * 1);
	if (ht == NULL)
		return (NULL);
	ht->size = size;
	ht->array = malloc(sizeof(hash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	return (ht);
}
