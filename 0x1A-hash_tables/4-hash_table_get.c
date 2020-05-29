#include "hash_tables.h"

/**
 * hash_table_get - retrieves a value associated with a key.
 * @ht: Hash table
 * @key: key
 * Return: The value associated to the key
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	int index;
	hash_node_t *temp = NULL;
	char *value = NULL;

	/* check if table exist */
	if (ht == NULL || key == NULL)
		return (NULL);
	/* assign the index  */
	index = key_index((const unsigned char *)key, ht->size);
	/* start the search into array 🚀 */
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			value = temp->value;
			break;
		}
		temp = temp->next;
	}
	/* does not exist the key */
	if (temp == NULL)
		return (NULL);
	/** the key exist ✅ */
	return (value);
}

