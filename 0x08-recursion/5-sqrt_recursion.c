#include "holberton.h"
/**
 * findraiz - function that find the square root
 * @x: the root square
 * @n: the number
 * Return: the square
 */
int findraiz(int x, int n)
	{
		if ((x * x) == n)
		{
			return (x);
		}
		else if ((x * x) > n)
		{
			return (-1);
		}
		else
		{
			return (findraiz(x + 1, n));
		}
	}
 /**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: number to find the square root
 * Return: the number
 */

int _sqrt_recursion(int n)
{
	int x = 0;
	int res = 0;

	if (n > 0)
	{
		res = findraiz(x, n);
		return (res);
	}
	else
	{
		res = -1;
		return (res);
	}
}
