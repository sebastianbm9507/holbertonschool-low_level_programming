#include"holberton.h"
/**
 * puts2 - puts a value
 * @str: and string parameter as a pointer
 * Return: Always 0 (Success)
 */
void puts2(char *str)
{
	/** finding the size of the string **/
	int counter = 0;

	while (str[counter] != '\0')
	{
		_putchar(str[counter]);
		counter += 2;
	}
	_putchar('\n');
}
