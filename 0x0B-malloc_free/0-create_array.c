#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * create_array -  creates an array of chars.
 * @size: integer parameter - size of the array
 * @c: char parameter to be fill in the array
 * Return: a pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	/** create a pointer because malloc return a void pointer **/
	char *ptr = 0;
	/** check if the size is 0 **/
	if (size == 0)
	{
		return (NULL);
	}
	/** asign to the pointer the malloc function */
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	/** add c to my array **/
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	return (ptr);
}
