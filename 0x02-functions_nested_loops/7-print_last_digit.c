#include"holberton.h"
/**
 * print_last_digit - print a sign depends of the value of c
 *
 * @z: stand for the parameter
 *
 * Return: 1 or 0
 */
int print_last_digit(int z)
{
	int lastDigit;

	lastDigit = z % 10;

	if (z < 0)
	{
		lastDigit *= -1;
	}
	_putchar(lastDigit + '0');
	return (lastDigit);
}
