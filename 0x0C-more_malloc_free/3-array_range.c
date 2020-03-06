#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * array_range - creates an array of integers.
 * @min: lesser number allowed
 * @max: upper number allowed
 * Return: pointer to new array or NULL if failure
 */

int *array_range(int min, int max)
{
	int i, j;
	int *myptr;

	if (min > max)
		return (NULL);
	j = max - min + 1;
	myptr = malloc(j * sizeof(int));
	if (myptr == NULL)
		return (NULL);
	for (i = 0; i < j; i++, min++)
		myptr[i] = min;
	return (myptr);
}
