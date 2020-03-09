#ifndef _DOG_H_
#define _DOG_H_
#include <stdio.h>
/**
 * struct dog - Define a new type struct dog with the following elements:
 * @name: name
 * @age: age
 * @owner: owner
 * Return: 0 always
 */
	typedef struct dog
	{
		char *name;
		float age;
		char *owner;
	} dog_t;
	void init_dog(struct dog *d, char *name, float age, char *owner);
	void print_dog(struct dog *d);
#endif
