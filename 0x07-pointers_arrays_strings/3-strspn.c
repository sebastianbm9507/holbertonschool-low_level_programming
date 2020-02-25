#include "holberton.h"

/**
 * _strspn - function that gets the length of a prefix substring.
 * @s: source string
 * @accept:  string that need to match with source
 * Return: number of bytes matches.
 */
unsigned int _strspn(char *s, char *accept)
{
	int bytes;
	int i, j;

	i = 0;
	while (s[i] != '\0' && s[i] != ' ')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				bytes++;
				break;
			}
			j++;
		}
		i++;
	}
	return (bytes);
}
