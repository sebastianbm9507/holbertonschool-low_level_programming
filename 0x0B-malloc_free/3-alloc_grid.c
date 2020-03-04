#include "holberton.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: integer parameter
 * @height: integer parameter
 * Return: int pointer
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **ptr2 = NULL;
	/** chech if parameter are 0 or less */
	if (width <= 0 && height <= 0)
	{
		return (NULL);
	}
	/** create memory for my malloc type double pointer */
	ptr2 = malloc(sizeof(int *) * height);
	/** check if my ptr is on succes */
	if (ptr2 == NULL)
	{
		return (NULL);
	}
	/** opening spaces in the height for the width in each height*/
	for (i = 0 ; i < height ; i++)
	{
		/** opening spaces for the width*/
		ptr2[i] = malloc(sizeof(int) * width);
		if (ptr2[i] == NULL)
		{
			for (; i >= 0 ; i--)
			{
				free(ptr2[i]);
			}
			free(ptr2);
			return (NULL);
		}
	}
	/** fill the array both dimensions with 0 */
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			ptr2[i][j] = 0;
	}
	return (ptr2);
}
