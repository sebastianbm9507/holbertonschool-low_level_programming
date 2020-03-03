#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * str_concat - function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: pointer no the new string.
 */
char *str_concat(char *s1, char *s2)
{
	/** cotains the length of my string */
	int i, a;
	/** variable to refer 0 position in s2 */
	int j;
	char *concaString;
	/** check if the strings are empty*/
	if (s1 == NULL && s2 == NULL)
	{
	return (NULL);
	}
	/** get the s1 lenght */
	a = 0;
	while (s1[a] != '\0')
		a++;
	/** get the s2 lenght */
	i = 0;
	while (s2[i] != '\0')
		i++;
	/** malloc to get the addres of my two string and handle with concatString*/
	concaString = malloc(sizeof(char) * (a + i));
	/** check if malloc fail */
	if (concaString == NULL)
		return (NULL);
	/** insert s1 to my new array */
	for (j = 0; s1[j] != '\0' ; j++)
	{
		concaString[j] = s1[j];
	}
	/** insert s2 to my new array that already has s1 */
	for (i = 0; s2[i] != 0 ; i++, j++)
	{
		concaString[j] = s2[i];
	}
	/** insert the null value to the end of s2 */
	concaString[j] = '\0';
	/** return the pointer to the concastring */
	return (concaString);
}
