#include"holberton.h"
/**
 * _isalpha - prints if the letter is upper case or lower case
 *
 *  @c: stand for the parameter
 *
 * Return: 1 if is lowercase or 0 if is not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
