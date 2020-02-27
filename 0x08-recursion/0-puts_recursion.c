#include "holberton.h"

/**
 * _puts_recursion -  function that prints a string, followed by a new line.
 * @s: pointer
 * Return: anything
 */
void _puts_recursion(char *s)
{
	int i;

	i = 0;
	if (s[i])
	{
		_putchar(s[i]);
		i++;
		_puts_recursion(&s[i]);
	}
	else
	{
		_putchar('\n');
	}
}
