#include "holberton.h"
/**
 * _memcpy -  a function that copies memory area.
 * @dest: my destiny pointer.
 * @src: my source pointer.
 * @n: my n bytes to be copy.
 * Return: the pointer.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n ; i++)
	{
	dest[i] = '\0';
	}
	return (dest);
}
