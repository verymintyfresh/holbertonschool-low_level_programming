#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Describes a dog
 * @name: the name of the dog
 * @age: how old the dog is
 * @owner: the owner of the dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for struct dog
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif
