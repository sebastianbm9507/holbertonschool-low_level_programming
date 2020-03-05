#include "holberton.h"

/**
 * _calloc - function that allocates memory for an array, using malloc.
 * @nmemb: number of elements
 * @size: size of elements
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	/** ptr to handle the size */
	char *ptr = NULL;
	/** check if nmemb or size are 0 */
	if (nmemb == 0 || size == 0)
		return (NULL);
	/** set the size of memory according to arguments*/
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	return (NULL);
	/** fill memory with 0 */
	for (i = 0; i < nmemb * size; i++)
	{
		ptr[i] = 0;
	}
	/** casting the ptr */
	 ptr = (void *)ptr;
	return (ptr);
}
