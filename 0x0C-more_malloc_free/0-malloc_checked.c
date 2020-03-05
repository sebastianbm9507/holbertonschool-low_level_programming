#include "holberton.h"

/**
 * malloc_checked - Write a function that allocates memory using malloc.
 * @b: unsigned int parameter
 * Return: pointer
 */
void *malloc_checked(unsigned int b)
{
	/** declare my pointer to reserve int in the size of my argument*/
	void *myptr = NULL;

	myptr = malloc(b);
	/** checking if my pointer fails */
	if (myptr == NULL)
	{
		exit(98);
	}
	else
	{
		return (myptr);
	}
}
