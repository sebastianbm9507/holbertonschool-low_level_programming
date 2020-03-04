#include "holberton.h"
#include <stdlib.h>
/**
* free_grid - free a grid
* @grid: grid
* @height: height grid
* Return: Void
*/
void free_grid(int **grid, int height)
{
	int index = 0;

	while (index < height)
	{
		free(grid[index]);
		index++;
	}
	free(grid);
}
