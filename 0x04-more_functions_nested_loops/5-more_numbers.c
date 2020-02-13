#include"holberton.h"
/**
 * more_numbers - print numbers from 0 to 9
 *
 * Return: void
 */
void more_numbers(void)
{
	int i;
	int j = 0;

	while (j <= 9)
	{
		i = 0;
		while (i <= 14)
		{
			if ((i / 10) > 0)
			{
				_putchar((i / 10) + '0');
			}
			_putchar((i % 10) + '0');
		i++;
		}
	_putchar('\n');
	j++;
	}
}
