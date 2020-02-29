#include"holberton.h"
/**
 * _isupper - checks for uppercase character
 *
 * @c: parameter int
 * Return: Always 0 (Success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
