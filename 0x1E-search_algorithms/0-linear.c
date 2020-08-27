#include "search_algos.h"

/**
 * linear_search - Function that return index position of
 * @array: pointer to the head of the array
 * @size: size of the array
 * @value: value to be find
 * Return: index if found, -1 otherwise
 *
*/

int linear_search(int *array, size_t size, int value)
{
	size_t i;
	int flag = 0;

		if (!*array)
			return (-1);

	  i = 0;
		while (i <= size)
		{
			if (array[i] == value)
			{
				flag = 1;
				break;
			}
			/* increment the index */
			i++;
		}
		return ((flag == 1) ? i : (unsigned int)-1);
}
