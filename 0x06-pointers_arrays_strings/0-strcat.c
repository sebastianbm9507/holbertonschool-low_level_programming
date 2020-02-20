#include"holberton.h"
/**
 * _strcat - concatenate an string
 * @dest: pointer char parameter destination
 * @src: source char pointer parameter
 *
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
