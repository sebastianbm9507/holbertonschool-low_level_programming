#include "holberton.h"

/**
 * leet - a function that encodes a string into 1337
 * @s: pointer to array of characters.
 * Return: array of characters
 */
char *leet(char *s)
{
	int i = 0;
	int j;
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	while (s[i] != '\0')
	{
		j = 0;
		while (numbers[j] != '\0')
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
			}
			j++;
		}
		i++;
	}
	return (s);
}
