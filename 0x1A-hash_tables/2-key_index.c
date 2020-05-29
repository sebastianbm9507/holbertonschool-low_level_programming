#include "hash_tables.h"

/**
 * key_index - Function that gives the index o a key
 * @key: key to calculate the index
 * @size: size of the array for key o be stored
 * Return: the index of the key
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int result;

	if (size == 0 || key == NULL)
		result = 0;
	else
		result = hash_djb2(key) % size;

	return (result);
}
