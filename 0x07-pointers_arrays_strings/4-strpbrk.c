#include "holberton.h"
/**
 * _strpbrk - 
 *
 * Return: 
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	i = 0;
	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				return (&s[i]);
			}
			j++;
		}
		i++;
		if (!s[i])
		break;
	}
	return (0);
}