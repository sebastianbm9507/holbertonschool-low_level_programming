#include"holberton.h"
/**
 * _strncat - concatenate an string
 * @dest: pointer char parameter destination
 * @src: source char pointer parameter
 * @n: int parameter that determinate the end of bytes to concatenate
 *
 * Return: Always 0 (Success)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (j < n  && src[j] != '\0')
	{
		dest[i] = src[j];
		j++;
		i++;
	}
	return (dest);
}
