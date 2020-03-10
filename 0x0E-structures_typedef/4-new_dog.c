#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * new_dog - function that creates a new dog.
 * @name: pointer to name
 * @age: age
 * @owner: owner
 * Return: pointer
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	/** my new dog */
	dog_t *bulldog;

	bulldog = malloc(sizeof(dog_t));

	if (bulldog == NULL)
		return (NULL);
	/** check if name is null */
	if (name == NULL)
	{
		free(owner);
		free(bulldog);
		return (NULL);
	}
	/** check if owner is null */
	if (owner == NULL)
	{
		free(name);
		free(bulldog);
		return (NULL);
	}
	/** filling my structure */
	bulldog->name = name;
	bulldog->age = age;
	bulldog->owner = owner;
	/** returning my new dog */
	return (bulldog);
}
