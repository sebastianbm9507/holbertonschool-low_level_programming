#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * sum_them_all - function that returns the sum of all its parameters.
 * @n: number of arguments
 * Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	/** declaring my variables */
	unsigned int i;
	int result;

	/** Creating my list */
	va_list numarg;

	/** check if n is 0 */
	if (n == 0)
	return (0);
	/** initializing my list */
	va_start(numarg, n);
	/** iterating my loop */
	result = 0;
	for (i = 0; i < n; i++)
	{
		result = result + va_arg(numarg, int);
	}
	/** ending my list */
	va_end(numarg);
	/**  return */
	return (result);
}
