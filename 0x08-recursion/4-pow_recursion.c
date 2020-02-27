#include "holberton.h"

/**
 * _pow_recursion - a function that returns the value of raised number
 * @x: integer parameter num to be raysed
 * @y: the number of raysed
 * Return: If y is lower than 0, the function should return -1
 */
int _pow_recursion(int x, int y)
{
	int res;

	if (y < 0)
	{
		res	= -1;
	}
	else if (y == 0)
	{
		res = 1;
	}
	else if (y > 0)
	{
		res = x * _pow_recursion(x, y - 1);
	}
	return (res);
}
