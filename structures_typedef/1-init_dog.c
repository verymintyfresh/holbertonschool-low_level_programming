#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - Initialises a dog variable
 * @d: The struct dog to initialise
 * @name: The name to set
 * @age: The age to set
 * @owner: The owner to set
 * Return: nothing
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
