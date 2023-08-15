#include "dog.h"
#include <stddef.h>
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 * Return: returns the pointer of the new dog/NULL if function fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new = malloc(sizeof(dog_t));

	if (new == NULL)
		return (NULL);
	new->name = strdup(name);
	new->age = age;
	new->owner = strdup(owner);
	if ((new->name == NULL) || (new->owner == NULL))
		return (NULL);
	return (new);
}
