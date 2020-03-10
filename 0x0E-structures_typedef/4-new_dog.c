#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
		int sizeName, sizeOwner;
		char *name_copy = NULL;
		char *owner_copy = NULL;
		/** my pointer to my new dog */
		dog_t *bulldog;

		/** creating space for my new dog */
		bulldog = malloc(sizeof(dog_t));
		if (bulldog == NULL)
			return (NULL);

	/** sizes of my pointer */
	sizeName = _strlen(name);
	/** creating the space for copy */
	name_copy = malloc(sizeof(char) * sizeName + 1);
	if (name_copy == NULL)
	{
		free(bulldog);
		return (NULL);
	}
	/** size of the owner */
	sizeOwner = _strlen(owner);
	/** creating the space for the  copy */
	owner_copy = malloc(sizeof(char) * sizeOwner + 1);
	if (owner_copy == NULL)
	{
		free(name_copy);
		free(bulldog);
		return (NULL);
	}
		/** create the copy */
		_strcpy(name_copy, name);
		_strcpy(owner_copy, owner);
	/** filling my new dog structure */
	bulldog->name = name_copy;
	bulldog->age = age;
	bulldog->owner = owner_copy;
	/** returning my new dog */
	return (bulldog);
}

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

/**
 * _strlen - swap a value
 * @s: pointer parameter
 * Return: Always 0 (Success)
 */
int _strlen(char *s)
{
	int counter = 0;

	while (s[counter] != '\0')
	{
		counter++;
	}
	return (counter);
}
