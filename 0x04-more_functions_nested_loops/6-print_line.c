#include"holberton.h"
/**
 * print_line - print numbers from 0 to 9
 * @n: integer parameter
 * Return: void
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		while (n > 0)
		{
		_putchar('_');
		n--;
		}
	_putchar('\n');
	}
}
