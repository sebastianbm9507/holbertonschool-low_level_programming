#include "holberton.h"

/**
 * _strchr - locates a character in a string
 * @s: pointer to an array.
 * @c: string to be find.
 * Return: my pointer.
 */
char *_strchr(char *s, char c)
{
	int i;

	for ( i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (&s[i]);
		}
	}
	return (NULL);
}