#include"holberton.h"
/**
 * print_rev - puts a value
 * @s: and string parameter as a pointer
 * Return: Always 0 (Success)
 */
void print_rev(char *s)
{
	int counter = 0;
	int lastdigit;
	/* encuentro el tamaÃo del string  */
	while (s[counter] != '\0')
	{
		counter++;
	}
	lastdigit = counter - 1;
	while (lastdigit >= 0)
	{
		_putchar(s[lastdigit]);
		lastdigit--;
	}
	_putchar('\n');
}
