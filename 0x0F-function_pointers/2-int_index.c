#include "function_pointers.h"

/**
 * int_index - function that searches for an integer.
 * @array: array of values
 * @size: size of the array
 * @cmp : function to be execute
 * Return: index of integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i, found;

	if (size <= 0)
		return (-1);

	for (i = 0; i <= size; i++)
	{
		if (cmp(array[i]))
		{
			found = i;
			break;
		}
		else
		{
			found = -1;
		}
	}
	return (found);
}
