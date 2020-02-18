#include"holberton.h"
/**
 * _puts - puts a value
 * @str: and string parameter as a pointer
 * Return: Always 0 (Success)
 */
void _puts(char *str)
{
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter++;
	}
_putchar('\n');
}
