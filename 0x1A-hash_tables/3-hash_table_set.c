#include "hash_tables.h"

/**
 * hash_table_set - Function that set a element into table
 * @ht: hast table pointer
 * @key: key of element to be inserted
 * @value: value of element to be inserted
 * Return: 1 on succes, 0 on failure
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *temp;
	unsigned long int index;
	int succes;
	int size = 0;

	size = ht->size;
	index = key_index((unsigned char *)key, size);

	/* No collision case */
	temp = ht->array[index];
	if (ht->array[index] == NULL)
	{
		ht->array[index] = malloc(sizeof(hash_node_t));
		if (ht->array[index] == NULL)
			return (0);
		ht->array[index]->key = strdup(key);
		ht->array[index]->value = strdup(value);
		ht->array[index]->next = NULL;
		succes = 1;
	}
	else
	{

		while (temp->next != NULL)
		{
			if (strcmp(temp->next->key, key) == 0)
			{
				free(temp->next->value);
				temp->next->value = strdup(value);
				succes = 1;
				break;
			}
			temp = temp->next;
		}
		/* case there's no coincidence */
		if (temp == NULL)
		{
			/** create node to be inserted */
			hash_node_t *new = malloc(sizeof(hash_node_t));

			if (new == NULL)
			return (0);
			new->next = ht->array[index];
			ht->array[index] = new;
			succes = 1;
		}
	}
	return (succes);
}
