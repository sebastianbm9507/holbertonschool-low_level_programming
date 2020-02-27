#include "holberton.h"

/**
 * _pow_recursion -
 *
 * Return: 
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
		res = x * _pow_recursion (x , y - 1);
	}
	return (res);
}
	