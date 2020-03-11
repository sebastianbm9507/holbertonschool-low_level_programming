#include <stdio.h>
/**
 * array_iterator - execute action on each array element
 * @array: array of elements
 * @size: number of iteration
 * @action: pointer function
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action == NULL || array == NULL || size <= 0)
	return;
	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
