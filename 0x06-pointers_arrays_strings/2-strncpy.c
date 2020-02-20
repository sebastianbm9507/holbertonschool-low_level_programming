#include"holberton.h"
/**
 * _strncpy - copying an string
 * @dest: pointer char parameter destination
 * @src: source char pointer parameter
 * @n: int parameter that determinate the end of bytes to concatenate
 *
 * Return: Always 0 (Success)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n && src[i] != '\0' ; i++)
	{
		dest[i] = src[i];
	}
for ( ; i < n ; i++)
{
dest[i] = '\0';
}
	return (dest);
}
