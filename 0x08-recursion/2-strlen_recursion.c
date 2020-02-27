#include "holberton.h"

/**
 * _strlen_recursion -
 *
 * Return: 
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