#include "dog.h"
#include <stdlib.h>
#include <string.h>

/**
 * new_dog - entry point
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int len1, len2, yr;
	dog_t *dogs;

	if (name == NULL || owner == NULL)
	{
		return (NULL);
	}

	dogs = malloc(sizeof(dog_t));
	if (dogs == NULL)
	{
		return (NULL);
	}
	len1 = strlen(name);
	len2 = strlen(owner);

	dogs->name = malloc(len1 + 1 * sizeof(char));
	if (dogs->name == NULL)
	{
		free(dogs);
		return (NULL);
	}
	strcpy(dogs->name, name);

	dogs->age = age;
	for (yr = 0; yr <= age; yr++)
		;
	yr++;

	dogs->owner = malloc(len2 + 1 * sizeof(char));
	if (dogs->owner == NULL)
	{
		free(dogs);
		free(dogs->name);
		return (NULL);
	}
	strcpy(dogs->owner, owner);
	return (dogs);
}
