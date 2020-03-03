#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - function that returns a pointer to a newly allocated
 * @str: pointer parameter string to be reallocated
 * Return: pointer to new string reallocated
 */
char *_strdup(char *str)
{
	int i = 0;
	int a;
	char *duplicateString;

	/** check if str is null */
	if (str == NULL)
	{
	return (NULL);
	}
	/** get the str lenght */
	a = 0;
	while (str[a] != '\0')
		a++;
	/** pointer to manipulate the void pointer from malloc */
	 duplicateString = malloc(sizeof(char) * (a + 1));
	 /** check duplicateString on fail */
	if (duplicateString == NULL)
	{
		return (NULL);
	}
	 /** duplicating string */
	for (i = 0; str[i] != 0; i++)
	{
		duplicateString[i] = str[i];
	}
	 duplicateString[i] = '\0';
	/** return pointer to succes */
	return (duplicateString);
}


