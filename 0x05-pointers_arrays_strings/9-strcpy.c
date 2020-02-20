#include"holberton.h"
/**
 * _strcpy - copy a string to a pointer variable
 * @dest: char pointer parameter dest
 * @src: char pointer parameter source
 * Return: return char
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j <= i)
	{
		dest[j] = src[j];
		j++;
	}
	return (dest);
}
