#include "holberton.h"
#include <stdio.h>
#include <stdlib.h>
/** prototypes to get sizes */
	int getsize1(char *s1);
	int getsize2(char *s2);
/**
 * str_concat - function that concatenates two strings
 * @s1: string pointer
 * @s2: string pointer
 * Return: pointer no the new string.
 */
char *str_concat(char *s1, char *s2)
{
	/** cotains the length of my string */
	int size1, size2;
	/** variable to refer 0 position in s2 */
	int j, i;
	char *concaString;
	/** check if the strings are empty*/
	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	size1 = getsize1(s1);
	size2 = getsize2(s2);
	/** malloc to get the addres of my two string and handle with concatString*/
	concaString = malloc(sizeof(char) * (size1 + size2 + 1));
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
/**
 * getsize1 - function that calculate lenght
 * @s1: string pointer
 * Return: int
 */
int getsize1(char *s1)
{
	int a;
	/** get the s1 lenght */
		a = 0;
		while (s1[a] != '\0')
			a++;
		return (a);
}
/**
 * getsize2 - function that calculate lenght
 * @s2: string pointer
 * Return:  int
 */
int getsize2(char *s2)
{
	int a;
	/** get the s2 lenght */
		a = 0;
		while (s2[a] != '\0')
			a++;
		return (a);
}
