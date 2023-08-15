#include "dog.h"
#include <stddef.h>

/**
 * init_dog - initializes the attributes of d with these attributes
 * @d: pointer to dog type
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 *
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
