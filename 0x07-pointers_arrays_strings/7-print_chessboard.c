#include "holberton.h"
/**
 * print_chessboard - function that prints the chessboard.
 * @a: array
 * Return: nothing
 */
void print_chessboard(char (*a)[8])
{
	int row, col;

	for (row = 0; row < 8; row++)
	{
		for (col = 0; col < 8; col++)
		{
			_putchar(a[row][col]);
		}
		_putchar ('\n');
	}
}
