#include "dog.h"
#include <stdlib.h>

/**
 * new_dog - creates a dog
 * @name: the dog's name
 * @age: the dog's age
 * @owner: the dog's owner
 * Return: a new dog_t
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);

	if (name != NULL)
	{
		dog->name = malloc(str_len(name) + 1);
		if (dog->name == NULL)
		{
			/* free(dog->name); */
			free(dog);
			return (NULL);
		}
		store_string(dog->name, name);
	}
	dog->age = age;
	if (owner != NULL)
	{
		dog->owner = malloc(str_len(owner) + 1);
		if (dog->owner == NULL)
		{
			/* free(dog->owner); */
			free(dog->name);		/* previously set */
			free(dog);
			return (NULL);
		}
		store_string(dog->owner, owner);
	}

	return (dog);
}

/**
 * store_string - copies data from one string to another
 * @dest: the destination string
 * @src: the source string
 * Return: nothing
 */
void store_string(char *dest, char *src)
{
	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
}

/**
 * str_len - calculates the length of a string
 * @str: the string
 * Return: the length of the string
 */
int str_len(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
		str++;
	}

	return (i);
}
