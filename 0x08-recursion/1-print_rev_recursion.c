#include "holberton.h"

/**
 * _print_rev_recursion -  function that returns the length of a string.
 * @s: string
 * Return: anything
 */
void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(s);
	}
}
