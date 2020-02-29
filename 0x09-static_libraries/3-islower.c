#include"holberton.h"
/**
 * _islower - prints if a letter is lower case
 *
 * @c: integer parameter
 * Return: 1 if is lowercase or 0 if is not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
