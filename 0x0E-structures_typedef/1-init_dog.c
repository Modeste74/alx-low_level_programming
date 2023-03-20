#include "dog.h"
#include <stdio.h>

/**
 * init_dog - entry point
 * @d: dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * return: void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
