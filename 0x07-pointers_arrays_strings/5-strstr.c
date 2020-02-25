#include "holberton.h"
/**
 * _strstr - function that locates a substring.
 * @haystack: array
 * @needle: array
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	i = 0;
	while (haystack != 0)
	{
		j = 0;
		while (needle != 0 && haystack != 0 && haystack[i] == needle[j])
		{
			j++;
			i++;
		}
		if (needle[j] == 0)
		{
			return (&haystack[i]);
		}
		i++;
	}
	return (0);
}
