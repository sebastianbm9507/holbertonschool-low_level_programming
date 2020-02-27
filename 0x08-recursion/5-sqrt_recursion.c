#include "holberton.h"
/**
 * _sqrt_recursion -
 *
 * Return: 
 */

int findraiz (int x, int n)
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

int _sqrt_recursion(int n)
{
	int x = 0;
	int res = 0;

	if (n > 0)
	{
		res = findraiz( x , n);
		return (res);
	}
	else
	{
		res = -1;
		return (res);
	}
	
	
}

	