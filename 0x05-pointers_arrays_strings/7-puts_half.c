#include"holberton.h"
/**
 * puts_half - print the second half of a string
 * @str: and string parameter as a pointer
 */
void puts_half(char *str)
{
	/** finding the size of the string **/
	int counter = 0;
	int poscentral;

	while (str[counter] != '\0')
	{
		counter++;
	}
/** the last position **/
	poscentral = counter / 2;
	while (str[poscentral] != '\0')
	{
		_putchar(str[poscentral]);
		poscentral++;
	}
	_putchar('\n');
}
