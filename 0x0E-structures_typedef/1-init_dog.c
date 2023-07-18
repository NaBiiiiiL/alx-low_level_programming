#include "dog.h"

/**
 * init_dog - initialize a dog
 * @d: the dog to init
 * @name: the dog's name
 * @age: dogs age
 * @owner: ownerr's name
 *
 * Return: void
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

