#include"holberton.h"
/**
 * _strcmp - compares two strings
 * @s1: pointer char parameter destination
 * @s2: source char pointer parameter
 * Return: Always 0 (Success)
 */
int _strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
	{
		i++;
	}
	return ((s1[i] + '0') - (s2[i] + '0'));
}
