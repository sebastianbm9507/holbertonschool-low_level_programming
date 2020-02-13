#include"holberton.h"
/**
 * print_most_numbers - print numbers from 0 to 9
 *
 * Return: the value of a*b
 */
void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{
		if (!(i == 2 || i == 4))
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
