#include"holberton.h"
/**
 * print_alphabet_x10 - prints the alphabet 10 times
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	int i;
	int b;

	for (b = 1; b <= 10 ; b++)
	{
		for (i = 'a'; i <= 'z' ; i++)
		{
		_putchar(i);
		}
	_putchar('\n');
	}

}
