#include "holberton.h"

/**
 * _strlen_recursion - function that returns the length of a string.
 * @s: string
 * Return: the lenght of the array
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (s[i])
	{
		_strlen_recursion(&s[i +  1]);
		return (1 + _strlen_recursion(&s[i + 1]));
	}
	else
	{
		return (0);
	}
}
