#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees the allocated space for dog type
 * @d: pointer to a dog type
 *
 */
void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		free(d->name);
		free(d->owner);
		free(d);
	}
}
