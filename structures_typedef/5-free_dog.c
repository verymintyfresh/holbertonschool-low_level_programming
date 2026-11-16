#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees memory used for a dog_t
 * @d: the dog to free
 * Return: nothing.
 */
void free_dog(dog_t *d)
{
	free(d->name);
	free(d->owner);
	free(d);
}
