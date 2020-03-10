#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: pointer to dog
 * Return: nothing
 */
void print_dog(struct dog *d)
{
	/** checking if d is NULL */
	if (d)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
		printf("Name: (nil)\n");
			printf("Age: %f\n", d->age);
		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
		printf("Owner: (nil)\n");
	}
}