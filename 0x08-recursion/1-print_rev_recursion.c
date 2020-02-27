#include "holberton.h"

/**
 * _print_rev_recursion -
 *
 * Return: 
 */
void _print_rev_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i])
	{
		_print_rev_recursion(&s[i + 1]);
		_putchar(s[i]); 
	}	
	
}