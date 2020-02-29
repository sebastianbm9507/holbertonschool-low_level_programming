#include "holberton.h"
/**
 * _memset - add n bytes of b to a pointer
 * @s: pointer.
 * @b: constant to be added
 * @n: bytes to be added
 * Return: a pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	i = 0;
	for (i = 0; n > i ; i++)
	{
		s[i] = b;
	}
	return (s);
}
